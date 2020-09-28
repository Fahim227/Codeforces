#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
   int t;
   while(cin>>t){
        while(t--){
            ll n;
            cin>>n;
            ll l=0,s=0;
            while(n>0){
                if(n>=10){
                    l=n%10;
                    s+=(n-l);
                    n=(n/10)+l;
                }
                else{
                    s+=n;
                    n/=10;
                }

            }
            cout<<s<<"\n";
        }
   }
}
