//ICPC Collaborative Contest - 69 Aug 18, 2023
//Problem D. D
#include <iostream>
#include <cstdio>
#include<stdio.h>

int maxelement(int arr[], int n){//Recursive function to find the largest element
                                //of an array
    int max;
    if(n == 1){
        return arr[0];
    }
    else{
        max = maxelement(arr , n-1);
        return(max > arr[n-1] ? max : arr[n-1]);
    }
}

int main(){

int n, temp = 0, v1 = 0, v2 = 0, v3 = 0, largest, value;

scanf("%d", &n);

int orginal[n], incr[n], decr[n], max[n];

for(int i = 0; i < n; i++){

    scanf("%d", &orginal[i]); //original sequence

    incr[i] = orginal[i];   //incremented sequence
    incr[i] += 1;
    decr[i] = orginal[i];   //decremented sequence
    decr[i] -= 1;
}

for(int i = 0; i < n; i++){

    value = orginal[i]; //assigning each element to value to check how many times it
                        //is repeated in the three arrays

    for(int j = 0; j < n; j++){
        if(value == orginal[j]){
            v1++;   //checking in the original array
    }
        if(value == incr[j]){
            v2++;   //checking in the incremented array
    }
        if(value == decr[j]){
            v3++;   //checking in the decremented array
    }

    temp = v1 + v2 + v3; //adding it all up to see the number of times an element is
                        //is repeated in the three arrays
    }

    max[i] = temp;  //a new array that consinsts the number of times of repetition of each
                    //element
    temp = 0;   //resetting the variables
    v1 = 0;
    v2 = 0;
    v3 = 0;
    
}

largest = maxelement(max , n); //calling the function


printf("%d", largest);    //printing the maxmimum number 

    return 0;
}
