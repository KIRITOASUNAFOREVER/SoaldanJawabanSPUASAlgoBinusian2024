#include <stdio.h>

int main(){
    int T, X, Y, Z;
    int i, last_candy_person;
    scanf("%d", &T);

    for(i=0; i<T; i++){
        scanf("%d", &X);
        scanf("%d", &Y);
        scanf("%d", &Z);
        Y = Y % X;
        last_candy_person = Z + Y - 1;

        if(last_candy_person > X){
            last_candy_person = last_candy_person % X;
        }
        if(last_candy_person == 0){
            last_candy_person = X;
        }
        printf("Case #%d: %d\n", i+1, last_candy_person);
    }
    return 0;
}
