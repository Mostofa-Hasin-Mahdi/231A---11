//ICPC Collaborative Contest - 69 Aug 18, 2023
//Problem D. D
#include <iostream>
#include <cstdio>
#include<stdio.h>
int main(){

int n, temp = 0, v1 = 0, v2 = 0, v3 = 0, total = 0, value;

scanf("%d", &n);

int orginal[n], incr[n], decr[n], max[n];

for(int i = 0; i < n; i++){

    scanf("%d", &orginal[i]); //original sequence

    incr[i] = orginal[i];   //incremented sequence
    incr[i] += 1;
    decr[i] = orginal[i];   //decremented sequence
    decr[i] -= 1;
}

for(int j =0; j < n; j++){

    temp = orginal[j]; //storing each value of the original sequence to check how many
                        //times it is repeated in each array

for(int i = 0; i < n; i++){
    int count = 0;
    if(incr[i] == temp){    //checking the repeatition in incremented array
        count++;
    }
    v1 += count;
}

for(int i = 0; i < n; i++){
    int count = 0;
    if(decr[i] == temp){    //checking the repeatition in decremented array
        count++;
    }
    v2 += count;
}

for(int i = 0; i < n; i++){
    int count = 0;
    if(orginal[i] == temp){ //checking the repeatition in original array
        count++;
    }
    v3 += count;
}

total = v1 + v2 + v3;   //adding it all up to see how many times it appeared in all arrays
                        //in total
max[j] = total; //assigning the total value of repeatition of each element to another array
v1 = 0; //resetting the values for the variables 
v2 = 0;
v3 = 0;
total = 0;
}

value = max[0];

for(int i = 0; i < n; i++){
    if(max[i] > value){
        value = max[i]; //finding the maximum number of times an element appeared in total
    }
}

printf("%d", value);    //printing the maxmimum number 

    return 0;
}
