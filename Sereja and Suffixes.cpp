#include <bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false)
using namespace std;

int main(){
    fast;
    int n,m;

    while(cin>>n>>m){
        int ans[100010]={0};
        int mark[100010]={0};
        //int pos[100010]={0};.
        int a[100010]={0};

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=n-1;i>=0;i--){
            ans[i]=ans[i+1];
            if(!mark[a[i]]){
                ans[i]++;
            }
            mark[a[i]]=1;
        }
        for(int i=0;i<m;i++){
            int ps;cin>>ps;
            cout<<ans[ps-1]<<"\n";
        }



    }
}
