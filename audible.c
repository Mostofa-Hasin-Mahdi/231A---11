#include <stdio.h>
int main(){
int T,x,y;
scanf("%d", &T);
for(int i=0;i<T;i++){
    scanf("%d", &x);
    if(x>=67){
        if(x<=45000){
            printf("\nYES");
        }
        else{
            printf("\nNO");
        }
    }
    else{
        printf("\nNO");
    }

}



    return 0;
}