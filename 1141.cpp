#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int a[n];

        int ans=0,temp=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<2*n;i++){

            if(a[i%n]==1){

                ans++;
            // cout<<i<<" "<<ans<<"\n";
             temp=max(temp,ans);
            }
            else if(a[i%n]==0){
                ans=0;
            }
        }
        cout<<temp<<"\n";


    }
}
