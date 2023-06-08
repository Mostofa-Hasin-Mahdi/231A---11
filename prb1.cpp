//solo speed contest problem A
#include <iostream>
#include <cstdio>
int main(){
int T,x;
scanf("%d", &T);
for(int i=0;i<T;i++){
    scanf("%d", &x);
    if(x<=50){
        printf("\nleft");
    }
    else{
        printf("\nright");
    }
}


    return 0;
}