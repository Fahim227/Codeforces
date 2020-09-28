#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(cin>>n>>m){
       if(n<m){
        cout<<"-1\n";
       }
       else{
            int ans=0;
            if(n%2==0){
                ans=n/2;
            }
            else
                ans=(n+1)/2;
            while(ans%m!=0){
                ans++;
            }
            cout<<ans<<"\n";

       }


    }
}
