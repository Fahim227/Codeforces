#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   while(cin>>t){
        while(t--){
            int n;
            cin>>n;
            int a[n];
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            sort(a,a+n);
            int ans=0,re=0;
            for(int i=0;i<n;i++){
                re++;
                if(re==a[i]){
                    ans++;
                    re=0;
                }
            }
            cout<<ans<<"\n";
        }

   }



}



