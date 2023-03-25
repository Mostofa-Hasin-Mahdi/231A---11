#include <stdio.h>
int main(){

int T,x,y=6;
scanf("%d", &T);
for(int i=0;i<T;i++){
    scanf("%d", &x);
    if(x==y){
        printf("\nYES");
    }
    else{
        printf("\nNO");
    }
}


    return 0;
}