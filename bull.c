#include <stdio.h>
int main(){
    int T,x,y;
    scanf("%d", &T);
    while(T--){
        scanf("%d %d", &x,&y);
        if(x>y){
            printf("\nLOSS");
        }
        else if(x==y){
            printf("\nNEUTRAL");
        }
        else{
            printf("\nPROFIT");
        }
    }
}