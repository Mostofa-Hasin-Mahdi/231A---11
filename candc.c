#include <stdio.h>
int main(){
int t,x,y,z,chap;
scanf("%d", &t);
while(t--){
    scanf("%d %d %d", &x,&y,&z);
    chap=x*y*z;
    printf("\n%d", chap);

}



    return 0;
}