#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a,b,n,x;

    cin>>a>>b>>n>>x;
    int sum=0;
    if(1ll*a*n+b>=x && (x%n)<=b){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }



}

int main(){
    int t;
    while(cin>>t){
        while(t--){
            solve();
        }
    }
}
