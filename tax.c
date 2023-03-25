#include <stdio.h>
int main(){
int T,x,y,invest;
scanf("%d", &T);
for(int i=0;i<T;i++){
    scanf("%d %d", &x,&y);
    if(x>y){
        invest=x-y;
        printf("\n%d", invest);
    }

}


    return 0;
}