#include <stdio.h>
#include<string.h>
 
int main() {
        long long int x1,v1,x2,v2,c, p = 0;
        scanf("%lld %lld %lld %lld %lld",&x1,&v1,&x2,&v2,&c);
        char final[15];
        while(p<=c)
        {
            if(x1==x2)
            {
                strcpy(final,"YA");
                break;
            }
            x1+=v1;
            x2+=v2;
            p++;
        }
        if(strcmp(final,"YA")==0){
        	printf("%s",final);
		}else{
			 printf("TIDAK");
		}
        return 0;
}
