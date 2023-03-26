#include <stdio.h>
int main(){
int T,x,y,chr;
scanf("%d", &T);
while(T--){
    scanf("%d %d", &x,&y);
    if(x>y){
        chr=x-y;
        printf("\n%d", chr);
    }
    else if(y>x){
        printf("\n0");
    }
    else{
        chr=y-x;
        printf("\n%d", chr);
    }
}


    return 0;
}