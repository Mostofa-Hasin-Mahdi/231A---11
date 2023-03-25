#include <stdio.h>
int main(){
int T,x=2000,y;
scanf("%d", &T);
for(int i=0;i<T;i++){
    scanf("%d", &y);
    if(y<x){
        printf("\nNO");
    }
    else{
        printf("\nYES");
    }
}


    return 0;
}