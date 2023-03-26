#include <stdio.h>
int main(){
int T,x,y,choco,candy;
scanf("%d", &T);
while (T--)
{
scanf("%d %d", &x,&y);
choco=x*2;
candy=y*5;
if(choco>candy){
    printf("\nChocolate");
}
else if(choco==candy){
    printf("\nEither");
}
else{
    printf("\nCandy");
}
}

    return 0;
}