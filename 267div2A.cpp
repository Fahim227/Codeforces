#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
         int p,q;
         int ans=0,dif=0;
         while(n--){
             cin>>p;
             cin>>q;
             dif=abs(p-q);
             if(dif>=2){
                ans++;
             }


         }
         cout<<ans<<"\n";

       }
}
