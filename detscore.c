#include <stdio.h>
int main(){
int T,x,y,mul;
scanf("%d", &T);
for(int i=0;i<T;i++){
    scanf("%d %d", &x,&y);
    mul=(x/10)*y;
    printf("\n%d", mul);

}

    return 0;
}