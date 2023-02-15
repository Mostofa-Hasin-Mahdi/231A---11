#include <stdio.h>
int main(){
int n,count;
int x,y,z;
int prb=0;
scanf("%d", &n);

for(count=1;count<=n;count++){
    scanf("%d %d %d", &x,&y,&z);
    if((x==1&&y==1)||(y==1&&z==1)||(z==1&&x==1)){
     prb+=1;
    }
}
printf("%d", prb);




    return 0;
}