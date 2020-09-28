#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int c=1;
    ll ans=0,sum=0;

    for(int i=n-1;i>=0;i--){
        sum+=a[i];
        if((sum/c)>=x){
            ans++;
            c++;
        }
        else{
            break;
        }

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
