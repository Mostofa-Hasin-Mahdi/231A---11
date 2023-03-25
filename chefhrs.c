#include <stdio.h>
int main(){
int T,x,y,hr;
scanf("%d", &T);
for(int i=0;i<T;i++){
    scanf("%d %d", &x, &y);
    hr=y-x;
    printf("\n%d", hr);
}


    return 0;
}