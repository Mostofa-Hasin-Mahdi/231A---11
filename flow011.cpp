#include <iostream>
#include <cstdio>
int main(){
    int T;
    float baseSal,hra,da,grossSal;
    scanf("%d", &T);
    while(T--){
        scanf("%f", &baseSal);
        if(baseSal<1500){
            hra=baseSal*0.1;
            da=baseSal*0.9;
            grossSal=baseSal+hra+da;
            printf("\n%.2f", grossSal);
        }
        else if(baseSal==1500||baseSal>1500){
            hra=500;
            da=baseSal*0.98;
            grossSal=baseSal+hra+da;
            printf("\n%.2f", grossSal);
        }
    }
    return 0;
}