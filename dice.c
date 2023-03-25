#include <stdio.h>
int main(){
int T,x,y,sum=0;
scanf("%d", &T);
for(int i =0; i<T;i++){
    scanf("%d %d", &x,&y);
    sum=x+y;
    if(sum>6){
        printf("\nYES");
    }
    else{
        printf("\nNO");
    }
}


    return 0;
}