#include <iostream>
#include <cstdio>
int main(){
int T,val,x;
scanf("%d", &T);
for(int i=1;i<=T;i++){
    scanf("%d",&x);
    val=(x*(x-1))/2;
    printf("Case %d: ",i);
    if(val%x!=0){
        if(val%2==0&&x%2==0){
            printf("%d/%d\n",val/2,x/2);
        }
        else{
            printf("%d/%d\n",val,x);
        }
    }
    else{
        printf("%d\n",val/x);
    }

}

    return 0;
}