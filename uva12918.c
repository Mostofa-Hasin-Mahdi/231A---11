#include <stdio.h>
int main(){
int T;
scanf("%d", &T);
while(T--){
    int key,house,tries,val,total=0;
    scanf("%d %d", &key,&house);
    val=house;
    for(int i=1;i<=key;i++){
        tries=val-1;
        val--;
        total+=tries;
    }
    printf("%d", total);

}




    return 0;
}