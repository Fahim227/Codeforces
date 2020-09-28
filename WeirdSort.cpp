#include <bits/stdc++.h>
using namespace std;

int main(){
     int t;
     while(cin>>t){
        while(t--){
            int n,m;
            cin>>n>>m;
            int a[n+1];
            int p[m];
            for(int i=1;i<=n;i++){
                cin>>a[i];
            }
            for(int i=0;i<m;i++){
                cin>>p[i];
            }
            sort(p,p+m);
            bool ok=true;
            while(ok){
                ok=false;
                for(int i=m-1;i>=0;i--){
                     if(a[p[i]]>a[p[i]+1]){
                            ok=true;
                        swap(a[p[i]],a[p[i]+1]);
                     }
                }
                if(!ok) break;
            }
            bool flag=true;
            for(int i=1;i<n;i++){
                if(a[i]>a[i+1]){
                    flag=false;
                }
               // cout<<a[i]<<" ";
            }
            if(flag){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }


        }

     }
}
