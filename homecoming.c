#include <stdio.h>
int main(){
int t,x,y,z;
scanf("%d", &t);
while(t--){
    scanf("%d %d", &x,&y);
    z=x*5;
    if(z>=y){
        printf("\nYES");
    }
    else{
        printf("\nNO");
    }
}


    return 0;
}