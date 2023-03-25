#include <stdio.h>
int main(){
int T,x,y=10,fit;
scanf("%d", &T);
for(int i=0;i<T;i++){
    //y+=5;
    scanf("%d", &x);
    fit=x*y;
    printf("\n%d", fit);


}


    return 0;
}