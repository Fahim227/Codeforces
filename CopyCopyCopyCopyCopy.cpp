#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    while(cin>>t){
        while(t--){
            int n;
            cin>>n;
            set<int> s;
            for(int i=0;i<n;i++){
                int tm;cin>>tm;
                s.insert(tm);
            }
            cout<<s.size()<<"\n";
        }
    }
}
