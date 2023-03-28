#include <stdio.h>
int main(){
int t,x,y,rate;
scanf("%d", &t);
while(t--){
    scanf("%d %d", &x,&y);
    rate=x+200;
    if(y>=x&&y<=rate){
        printf("\nYES");
    }
    else{
        printf("\nNO");
    }
}

    return 0;
}