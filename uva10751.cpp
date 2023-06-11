#include <iostream>
#include <cstdio>
#include <math.h>
int main(){

int T,s,d,n;
double path;
scanf("%d",&T);

while(T--){
 scanf("%d", &n);
 if(n==1){
    printf("0.000\n");
 }
 else{
    s=(n-1)*4;
    d=n*n-s;
    path=s+d*(sqrt(0.5)*2);
    printf("%.3lf\n", path);
}
 }
    return 0;
}