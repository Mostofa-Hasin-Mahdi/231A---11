/*
█▀▄▀█ █▀▀█ █▀▀▄ █▀▀ 　 █▀▀▄ █░░█ 
█░▀░█ █▄▄█ █░░█ █▀▀ 　 █▀▀▄ █▄▄█ 
▀░░░▀ ▀░░▀ ▀▀▀░ ▀▀▀ 　 ▀▀▀░ ▄▄▄█
█▄─█▀▀▀█─▄█─█─█▄─▄█─▄─▄─█▄─▄▄─█░█░██─▄▄▄▄█▄─▄███▄─▄▄─█
██─█─█─█─██─▄─██─████─████─▄█▀█▄▄░██─██▄─██─██▀██─▄█▀█
▀▀▄▄▄▀▄▄▄▀▀▄▀▄▀▄▄▄▀▀▄▄▄▀▀▄▄▄▄▄▀▀▄▄▄▀▄▄▄▄▄▀▄▄▄▄▄▀▄▄▄▄▄▀
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T,n,product = 1;
    //cout<<"test case\n";
    cin>>T;
    while(T--){
        //cout<<"array size\n";
        cin>>n;
        int a[n];
        //cout<<"elements\n";
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        a[0]+=1;
        for(int i = 0; i < n; i++){
            product *= a[i];
        }
        cout<<product<<endl;
        product = 1;
    }
    
return 0;
}