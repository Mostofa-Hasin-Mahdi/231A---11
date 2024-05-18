/*
█▀▄▀█ █▀▀█ █▀▀▄ █▀▀ 　 █▀▀▄ █░░█ 
█░▀░█ █▄▄█ █░░█ █▀▀ 　 █▀▀▄ █▄▄█ 
▀░░░▀ ▀░░▀ ▀▀▀░ ▀▀▀ 　 ▀▀▀░ ▄▄▄█
█▄─█▀▀▀█─▄█─█─█▄─▄█─▄─▄─█▄─▄▄─█░█░██─▄▄▄▄█▄─▄███▄─▄▄─█
██─█─█─█─██─▄─██─████─████─▄█▀█▄▄░██─██▄─██─██▀██─▄█▀█
▀▀▄▄▄▀▄▄▄▀▀▄▀▄▀▄▄▄▀▀▄▄▄▀▀▄▄▄▄▄▀▀▄▄▄▀▄▄▄▄▄▀▄▄▄▄▄▀▄▄▄▄▄▀
*/

#include <stdio.h>
#include <string.h>



int main(){

char a[100];
scanf("%s", &a);

char temp;
int length = strlen(a), count = 0;

for(int i = 0; i < length - 1; i++){
    for(int j = i+1; j < length; j++){
        if(a[i] > a[j]){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }

    }
}


//printf("%s", a);

for(int i = 0; i < length; i++){
    if(a[i] == a[i+1]){
        count++;
    }
}
int p = length - count;

if(p % 2 == 0){
    printf("CHAT WITH HER!\n");
}
else{
    printf("IGNORE HIM!\n");
}

    return 0;
}