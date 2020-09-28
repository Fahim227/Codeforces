#include <bits/stdc++.h>
using namespace std;
int main(){
     vector<int> v;
     int n;
     while(cin>>n){
        for(int i=1;i<=n;i++){
            int t;cin>>t;
            v.push_back(t);
        }
        sort(v.begin(),v.end());
        int q;cin>>q;
        for(int i=1;i<=q;i++){
            int m;cin>>m;
            cout<<upper_bound(v.begin(),v.end(),m)-v.begin()<<"\n";
        }
        v.clear();

     }
}
