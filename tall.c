#include <stdio.h>
int main(){
int T,x,y;
scanf("%d", &T);
for(int i=0;i<T;i++){
    scanf("%d %d", &x,&y);
    if(x>y){
        printf("\nA");
    }
    else{
        printf("\nB");
    }
}


    return 0;
}