#include <stdio.h>
int main(){
int T,x,y=100,tax;
scanf("%d", &T);

for(int i=0;i<T;i++){
    scanf("%d", &x);
    if(x>y){
        x-=10;
        printf("\n%d", x);
    }
    else if(x==y){
        printf("\n%d", x);
    }
    else{
        printf("\n%d", x);
    }
}


    return 0;
}