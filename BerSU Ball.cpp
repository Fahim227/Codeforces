#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false)
using namespace std;


int main(){
    fast;
    int n,m;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    cin>>m;
    int g[m];
    for(int i=0;i<m;i++){
        cin>>g[i];
    }
    sort(b,b+n);
    sort(g,g+m);
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(abs(b[i]-g[j])<=1){
                ans++;
                g[j]=150;

                break;
            }
        }
    }
    cout<<ans<<"\n";







    }

