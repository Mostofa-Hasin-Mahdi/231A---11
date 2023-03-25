#include <stdio.h>
int main(){

int T,x,y,total;

scanf("%d", &T);
for(int i=0;i<T;i++){
    scanf("%d %d", &x,&y);
    total = x*y;
    printf("\n%d", total);
}


    return 0;
}