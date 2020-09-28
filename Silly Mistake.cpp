#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        s.insert(a[i]);
    }
    if(sum!=0 || s.size()!=n){
        cout<<"-1\n";
    }
    else{

        sort(a,a+n);


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
