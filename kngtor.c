#include <stdio.h>
int main(){
    int T,x,y,total;
    scanf("%d", &T);
   while(T--){
     scanf("%d %d", &x,&y);
        total=(x*5)+(y*7);
        printf("\n%d", total);
   }


    return 0;
}