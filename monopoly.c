#include <stdio.h>
int main(){
int t,x,y,z,r1,r2,r3;
scanf("%d", &t);
while(t--){
    scanf("%d %d %d", &x,&y,&z);
    if(x>(y+z)){
        printf("\nYES");
    }
    else if(y>(x+z)){
        printf("\nYES");
    }
    else if(z>(x+y)){
        printf("\nYES");
    }
    else{
        printf("\nNO");
    }
}


    return 0;
}