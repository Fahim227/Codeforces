#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string s;
     while(cin>>s){
        int c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='7' || s[i]=='4'){
                c++;
            }
        }
        //cout<<c<<"\n";
        if(c==4 || c==7){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}

