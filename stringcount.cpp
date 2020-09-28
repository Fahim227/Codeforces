#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string s;
    while(cin>>s){
    int c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                c++;
            }
        }
        cout<<c<<"\n";
    }
}
