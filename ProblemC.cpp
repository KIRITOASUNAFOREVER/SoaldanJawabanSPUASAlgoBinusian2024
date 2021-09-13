#include <string.h>
#include <stdio.h>
int main(){
    FILE *fp = fopen("testdata.in", "r");
    int t;
    char s1[110],s2[110];
    fscanf(fp,"%d",&t);

    int ans[110];

    for(int z=1;z<=t;z++){
            int cnt=0;
        fscanf(fp,"%s",&s1);
        fscanf(fp,"%s",&s2);
        for(int i=0;i<=strlen(s1)-strlen(s2);i++){
            int flag=1;

    for(int j=0;j<strlen(s2);j++){

        if(s1[i+j]!=s2[j]){
            flag=0;
            break;
        }
     }
        if(flag==1){
        ans[cnt]=i;
        cnt++;
        }
    }
    if(cnt>0){
    for(int i=0;i<cnt;i++){
        if(i){
            printf(" ");
        }
        printf("%d",ans[i]);
        ans[i]=0;
    }
    printf("\n");
    }
    else{
        printf("N/A\n");
    }
}
return 0;
}
