#include <iostream>
#include <cstdio>
#include <ctype.h>
int main(){
    char eye1,eye2;
    scanf("%c %c", &eye1,&eye2);
    eye1=toupper(eye1);
    eye2=toupper(eye2);
    if(eye1=='R'&&eye2=='R'){
        printf("\nR");
    }
    else if(eye1=='R'&&eye2=='B'){
        printf("\nR");
    }
    else if(eye1=='B'&&eye2=='R'){
        printf("\nR");
    }
    else if(eye1=='R'&&eye2=='G'){
        printf("\nR");
    }
    else if(eye1=='G'&&eye2=='R'){
        printf("\nR");
    }
    else if(eye1=='B'&&eye2=='B'){
        printf("\nB");
    }
    else if(eye1=='B'&&eye2=='G'){
        printf("\nB");
    }
    else if(eye1=='G'&&eye2=='B'){
        printf("\nB");
    }
    else if(eye1=='G'&&eye2=='G'){
        printf("\nG");
    }
  




    return 0;
}