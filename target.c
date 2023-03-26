#include <stdio.h>
int main(){
int T,x,y,tar;
scanf("%d", &T);
for(int i=0;i<T;i++){
    scanf("%d %d", &x,&y);
    tar=x-y;
    printf("\n%d", tar);
}



    return 0;
}