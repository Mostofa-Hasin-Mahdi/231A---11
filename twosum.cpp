/*
█▀▄▀█ █▀▀█ █▀▀▄ █▀▀ 　 █▀▀▄ █░░█ 
█░▀░█ █▄▄█ █░░█ █▀▀ 　 █▀▀▄ █▄▄█ 
▀░░░▀ ▀░░▀ ▀▀▀░ ▀▀▀ 　 ▀▀▀░ ▄▄▄█
█▄─█▀▀▀█─▄█─█─█▄─▄█─▄─▄─█▄─▄▄─█░█░██─▄▄▄▄█▄─▄███▄─▄▄─█
██─█─█─█─██─▄─██─████─████─▄█▀█▄▄░██─██▄─██─██▀██─▄█▀█
▀▀▄▄▄▀▄▄▄▀▀▄▀▄▀▄▄▄▀▀▄▄▄▀▀▄▄▄▄▄▀▀▄▄▄▀▄▄▄▄▄▀▄▄▄▄▄▀▄▄▄▄▄▀
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

int num, target, count = 0;
cin>>num;
int a[num];
for(int i = 0; i < num; i++){
    cin>>a[i];
}
cin>>target;
for(int i = 0; i < num; i++){
    for(int j = 1; j< num; j++){
        count = a[i]+a[j];
        if(count == target){
            cout<<"["<<i<<","<<j<<"]";
           return 0;
        }
    }
}

/*This code is written to work with leetcode's pre-written function

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
int count = 0;
for(int i = 0; i < numsSize; i++){
    for(int j = i+1; j < numsSize; j++){
        count = nums[i]+nums[j];
        if(count == target){
            int* result = malloc(sizeof(int) * 2);
            result[0] = i;
            result[1] = j;
            *returnSize = 2;
            return result;
        }
    }
}
    *returnSize = 0;
    return NULL;

}


*/

    return 0;
}