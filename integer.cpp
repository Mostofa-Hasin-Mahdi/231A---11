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

void input(int arr[], int n){   //recursive function to take inputs of an array
    if(n <= 0){
        return;
    }
    else{
        input(arr, n - 1);
        scanf("%d", &arr[n - 1]);
    }
}

void incre(int *arr,size_t n){  //recursive fucntion to increment each element of an array by 1
    if(n == 0) return;

    (*arr)++;

    incre(arr + 1, n - 1);
}

void decre(int *arr, size_t n){ //recursive function to decrement each element of an array by 1
    if(n == 0) return;

    (*arr)--;

    decre(arr + 1, n - 1);
}

int main(){

int n, temp = 0, v1 = 0, v2 = 0, v3 = 0, largest, value;

scanf("%d", &n);

int original[n], incr[n], decr[n], max[n];

input(original, n); //inputing the elements using recursion
memcpy(incr, original, sizeof(original));//copying the elements to incr array
memcpy(decr, original, sizeof(original));//copying the elements to decre array
incre(incr, n); //incrementing each element by 1 using recursion
decre(decr, n); //decrementing each element by 1 using recursion

for(int i = 0; i < n; i++){

    value = original[i]; //assigning each element to value to check how many times it
                        //is repeated in the three arrays

    for(int j = 0; j < n; j++){
        if(value == original[j]){
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

largest = maxelement(max , n); //finding the largest number using recursion


printf("%d", largest);    //printing the largest number 

    return 0;
}
