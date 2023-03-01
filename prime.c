#include <stdio.h>
int main(){
int n,x,count=0;

scanf("%d", &n);

for(x=1;x<=n;x++){
    if(n%x==0){
        count+=1;
        x+=1;
    }
    else{
        x+=1;
    }
}
if(count==2){
    printf("The number is prime");
}
else{
    printf("The number is not prime");
}



    return 0;
}