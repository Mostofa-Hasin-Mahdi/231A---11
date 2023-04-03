#include <stdio.h>
int main(){

int k,n,w,pr=1,total=0,brrw;
scanf("%d %d %d", &k,&n,&w);
while(w--){
    total+=k*pr;
    pr++;
}
if(total>n){
    brrw=total-n;
    printf("\n%d", brrw);
}
else{
    printf("\n0");
}


    return 0;
}