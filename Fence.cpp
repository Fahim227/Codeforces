#include <bits/stdc++.h>
using namespace std;
int ar[200000];
int main(){
    ios_base::sync_with_stdio(0);
    int n,k;
    while(cin>>n>>k){
        int a[n+1];

        for(int i=1;i<=n;i++){
            cin>>a[i];
            ar[i]=ar[i-1]+a[i];

        }
        int ans=ar[k];
        int ansidx=0;
        for(int i=k+1;i<=n;i++){

            if(ar[i]-ar[i-k]<ans){
                ans=ar[i]-ar[i-k];
                ansidx=i-k;
            }
        }

        cout<<ansidx+1<<"\n";
    }
}
