#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
   int n;
   while(cin>>n){
       string s;
       cin>>s;
       int ans=0;
       bool flag=true;
       while(flag){

            for(int i=0;i<=n-3;i++){
                 if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x' ){
                    s.erase(s.begin()+i);
                    //cout<<i<<" ";
                    ans++;
                 }
             }
            flag= false;
            for(int i=0;i<=n-3;i++){
                 if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x' ){
                    flag=true;
                  }
           }

       }

       cout<<ans<<"\n";
   }
}
