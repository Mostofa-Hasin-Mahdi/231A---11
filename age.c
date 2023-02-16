#include <stdio.h>
int main(){

int T;
scanf("%d", &T);
while(T--){
    int x,y,a;
    scanf("%d %d", &x,&y);
    scanf("%d", &a);
    if(a>=x&&a<y){
        printf("\nYES");
    }
    else{
        printf("\nNO");
    }

}


    return 0;
}