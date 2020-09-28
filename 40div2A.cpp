#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    while(cin>>s>>t){
        string st="";
        for(int i=t.length()-1;i>=0;i--){
             st+=t[i];
        }
        if(st==s){
           cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
