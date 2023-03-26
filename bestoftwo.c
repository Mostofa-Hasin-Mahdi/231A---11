#include <stdio.h>
int main(){
int T,x,y;
scanf("%d", &T);
while(T--){
    scanf("%d %d", &x,&y);
    if(x>y){
        printf("\n%d", x);
    }
    else{
        printf("\n%d", y);
    }
}


    return 0;
}