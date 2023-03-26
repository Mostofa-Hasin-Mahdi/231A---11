//to find the factorial of n where n is user input
#include <stdio.h>
int main(){

int n,i,num=0,mul=1;
scanf("%d", &n);

for(i=0;i<n;i++){

num+=1;
mul*=num;

}
printf("The factorial of %d is %d",n,mul);




    return 0;
}