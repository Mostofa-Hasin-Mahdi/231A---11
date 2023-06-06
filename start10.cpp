#include <iostream>
#include <cstdio>
int main(){
    int T,a,b,c;
    scanf("%d", &T);
    while(T--){
        scanf("%d %d %d", &a,&b,&c);
        if(c<a&&c<b){
            printf("\nAlice");
        }
        else if(b<a&&b<c){
            printf("\nBob");
        }
        else{
            printf("\nDraw");
        }


    }
    return 0;
}