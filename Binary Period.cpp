#include <bits/stdc++.h>
using namespace std;

void solve(){
    string t;
    cin>>t;
    int zero=0,one=0;
    for(int i=0;i<t.length();i++){

        if(t[i]=='0'){
            zero++;
        }
        else{
            one++;
        }
    }
    if(zero==t.length()){

        cout<<t<<"\n";
    }
    else  if(one==t.length()){

        cout<<t<<"\n";

    }
    else{

            for(int i=0;i<t.length();i++){
                cout<<"10";
            }
             cout<<"\n";


    }
}


int main(){
    int t;
    while(cin>>t){
        while(t--){
            solve();
        }
    }
}
