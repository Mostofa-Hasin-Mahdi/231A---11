//To calculate the sum and exact average of first n natural numbers
#include <stdio.h>
int main(){

int i,x,num=0,sum=0,avg;

scanf("%d", &x);

for(i=0;i<x;i++){
    num+=1;
    sum=sum+num;
}

avg=sum/x;
printf("The sum of first %d natural numbers are %d\nand their average is %d", x,sum,avg);



    return 0;
}