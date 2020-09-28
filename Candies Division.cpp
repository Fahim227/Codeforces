#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int halfk=k/2;
    int remaink=k-halfk;
    int halfn=n/2;
    int remainn=n-halfn;
    int ans=0;
    ans+=(n-n%k);
    ans+=min(n%k,halfk);


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
