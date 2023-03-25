#include <stdio.h>
int main(){
int T,x,y,burg;
scanf("%d", &T);
for(int i=0;i<T;i++){
    scanf("%d %d", &x, &y);
    if(x==y){
        printf("\n%d", x);
    }
    else if(x>y){
        printf("\n%d", y);
    }
    else if(x<y){
        printf("\n%d", x);
    }
}



    return 0;
}