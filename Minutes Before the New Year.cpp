#include <bits/stdc++.h>
using namespace std;

void solve(){
    int h,m;
    cin>>h>>m;
    int ans = (60*abs(23-h))+abs(60-m);
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
