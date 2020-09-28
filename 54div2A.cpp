#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin>>s){
        string str="hello";
        int j=0,c=0;
        for(int i=0;i<s.length() && c<=5;){
            if(s[i]==str[j]){
                i++;c++;
                j++;
            }
            else{
                i++;
            }
        }
        if(c==5){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
