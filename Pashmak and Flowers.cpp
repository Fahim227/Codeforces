#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    while(cin>>n){
        int a[n];
        int mn=INT_MAX,mx=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mn=min(mn,a[i]);
            mx=max(mx,a[i]);
        }
        long long mnn=0,mxx=0;
        for(int i=0;i<n;i++){
            if(a[i]==mn){
                mnn++;
            }
            else if(a[i]==mx){
                mxx++;
            }
        }
        cout<<mx-mn<<" ";
        if(mn==mx){
            cout<<n*(n-1)/2<<"\n";
        }
        else{
            cout<<mxx*mnn<<"\n";
        }
    }
}
