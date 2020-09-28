
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
    int mn=INT_MAX;
    for(int i=n-1;i>=0;i--){

        if(a[i]>mn){
            ans++;
        }
        mn=min(a[i],mn);

    }
    cout<<ans<<"\n";


}

int main(){
    int t;
    while(cin>>t){
            while(t--){
                solve();
            }




    }


}

