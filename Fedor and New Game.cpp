#include <bits/stdc++.h>
using namespace std;
int bitdiff(int a,int b){
    int c=0;
    for(int i=0;i<=19;i++){
        if(((a >> i) & 1) != ((b >> i) & 1) ){
            c++;
        }
    }
    return c;
}
int main(){
    int n,m,k;
    while(cin>>n>>m>>k){
        int a[m+1];
        for(int i=0;i<m+1;i++){
            cin>>a[i];
        }
        int ans=0;
        for(int i=0;i<m;i++){
            int cnt=bitdiff(a[i],a[m]);
            //cout<<cnt<<" ";
            if(cnt<=k){
                ans++;

            }
        }
        cout<<ans<<"\n";




    }
}
