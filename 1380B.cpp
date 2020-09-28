#include <bits/stdc++.h>
using namespace std;


void solve(){
    string str;
    cin>>str;
    int r=0,s=0,p=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='R'){
            r++;
        }
        else if(str[i]=='S'){
            s++;
        }
        else if(str[i]=='P'){
            p++;
        }
    }
    string ans="";
    if(r>=s && r>=p){
        for(int i=0;i<str.length();i++){
            ans+='P';
        }

    }
    else if(s>=r && s>=p){
        for(int i=0;i<str.length();i++){
            ans+='R';
        }
    }
    else if(p>=r && p>=s){
        for(int i=0;i<str.length();i++){
            ans+='S';
        }
    }
    cout<<ans<<"\n";

}

int main(){
    int t;
    while(cin>>t){
        while(t--)
            solve();
    }
}
