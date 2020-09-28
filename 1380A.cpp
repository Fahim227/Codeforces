#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ansi,ansj,ansk;
    bool ii=false,kk=false;
    for(int j=0;j<n;j++){
        for(int i=j;i>=0;i--){
            if(a[i]<a[j]){
                ansi=i;
                ii=true;
                break;
            }
        }
        for(int k=j;k<n;k++){
            if(a[k]<a[j]){
                ansk=k;
                kk=true;
                break;
            }
        }
        if(ii && kk){
            ansj=j;
            break;
        }
        else{
            ii=false;
            kk=false;
        }

    }

    if(ii && kk){
        cout<<"Yes\n"<<ansi+1<<" "<<ansj+1<<" "<<ansk+1<<"\n";
    }
    else{
        cout<<"No\n";
    }


}

int main(){
    int t;
    while(cin>>t){
        while(t--)
            solve();
    }
}
