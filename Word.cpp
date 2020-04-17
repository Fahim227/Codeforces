#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin>>s){

    int u=0,low=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>=65 && s[i]<=90){
            u++;
        }
        else{
            low++;
        }
    }
    if(u>low){
        for(int i=0;i<s.length();i++){
            if(s[i]>=65 && s[i]<=90){

            }
            else{
                s[i]-=32;
            }
      }
    }
    else{
        for(int i=0;i<s.length();i++){
            if(s[i]>=65 && s[i]<=90){
               s[i]+=32;
            }
      }
    }
    cout<<s<<"\n";

    }
}
