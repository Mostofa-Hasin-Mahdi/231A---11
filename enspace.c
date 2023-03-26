#include <stdio.h>
int main(){
int T,x,y,z,size;
scanf("%d", &T);
while(T--){
    scanf("%d %d %d", &x,&y,&z);
    size=y+(z*2);
    if(size<x){
        printf("\nYES");
    }
    else if(size==x){
        printf("\nYES");
    }
    else{
        printf("\nNO");
    }


}

    return 0;
}