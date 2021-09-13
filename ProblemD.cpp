#include <stdio.h>

int swap(int a,int b)
{
    int temp=a-b;
    if(temp<0)
 {
        temp*=-1;
    }
    return temp;
}

void merge(int arr[],int l,int r,int mid)
{
    int i,j;
    int sz1=mid-l+1,sz2=r-mid;
    int kiri[sz1],kanan[sz2];
    
    for(i=0;i<sz1;i++)
 {
        kiri[i]=arr[l+i];
    }
    for(j=0;j<sz2;j++)
 {
        kanan[j]=arr[mid+1+j];
    }
    int k=l;
    i=0,j=0;
    while(i<sz1&&j<sz2)
 {
       if (kiri[i] <= kanan[j])
  {
           arr[k] = kiri[i];
           i++;
        }
       else
    {
           arr[k]=kanan[j];
           j++;
       }
       k++;
    }
    while (i<sz1)
 {
        arr[k] = kiri[i];
        i++;
        k++;
    }
    while(j<sz2)
 {
        arr[k] = kanan[j];
        j++;
        k++;
    }
}

void mergesort(int arr[],int l,int r)
{
    if(l<r)
 {
        int mid=(l+r-1)/2;

        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,r,mid);
    }
}

int main(){
    int cnt=0;
    int s1[100015],s2[100015];
    int n;
    int a[100015];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
     scanf("%d",&a[i]);
    }
    mergesort(a,0,n-1);
    int max=0;
    for(int i=0;i<n-1;i++){
        int s=swap(a[i],a[i+1]);
        if(s>max){
            max=s;
            cnt=0;
            s1[cnt]=a[i];
            s2[cnt]=a[i+1];
            cnt++;
        }
        else if(s==max){
            s1[cnt]=a[i];
            s2[cnt]=a[i+1];
            cnt++;
        }
    }

    for(int i=0;i<cnt;i++){
        if(i){
            printf(" ");
        }
        printf("%d %d",s1[i],s2[i]);
    }
    printf("\n");
}
