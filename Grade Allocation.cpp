#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    while(cin>>t){
        while(t--){
            int n,m;
            cin>>n>>m;

            int a[n];
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            for(int i=1;i<n;i++){
                a[0]+=a[i];
                a[i]=0;
            }
            if(a[0]>=m){
                cout<<m<<"\n";
            }
            else{
                cout<<a[0]<<"\n";
            }

        }
    }



}
