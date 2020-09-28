#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin>>s){
        bool flag=false;
        for(int i=0;i<s.length();i++){
            if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){

                flag=true;
            }

        }
        if(!flag){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }

}
