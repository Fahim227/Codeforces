#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(cin>>n){
        int a[3]={0};
        for(int i=0;i<n;i++){
            int x;cin>>x;
            int y;cin>>y;
            int z;cin>>z;
            a[0]+=x;
            a[1]+=y;
            a[2]+=z;
        }
        if(a[0]==0 && a[1]==0 && a[2]==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
