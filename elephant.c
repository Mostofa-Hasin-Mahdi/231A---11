#include <stdio.h>
int main(){

int x,y=0,steps=0;
scanf("%d", &x);
if(x%5!=0&&x%5<=5){
    y+=1;
}
steps=(x/5)+y;
printf("%d", steps);



    return 0;
}