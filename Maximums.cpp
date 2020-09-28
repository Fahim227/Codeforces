#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
   int n;
   while(cin>>n){
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int sum=a[0];
        cout<<a[0]<<" ";
        for(int i=1;i<n;i++){
            cout<<sum+a[i]<<" ";
            if(a[i]<0){
                //sum+=(-1)*a[i];
                continue;
            }
            sum+=a[i];
         }

   }




}

int main(){
   // int t;
    //while(cin>>t){
       // while(t--){
            solve();
        //}
   // }
}
