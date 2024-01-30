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
string borze;
int count = 0;
getline(cin, borze);

for(int i = 0; i < borze.size(); i++){
    if(borze[i] == '-'){
        if(borze[i+1] == '-'){
            cout<<2;
        }
        else if(borze[i+1] == '.'){
            cout<<1;
        }
        i++;
    }
    else if(borze[i] == '.'){
        cout<<0;
    }
}

    return 0;
}