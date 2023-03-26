#include <stdio.h>
int main(){
int T,x,y,z,cred;
scanf("%d", &T);
while(T--){
    scanf("%d %d %d", &x,&y,&z);
    cred=(4*x)+(2*y);
    printf("\n%d", cred);

}

    return 0;
}