#include <stdio.h>
int main(){
int T,x;
scanf("%d", &T);
for(int i=0;i<T;i++){
    scanf("%d", &x);
    if(x>=30){
        printf("\nYES");
    }
    else{
        printf("\nNO");
    }
}


    return 0;
}