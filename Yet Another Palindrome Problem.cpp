#include <bits/stdC++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    bool ans=false;
    for(int i=0;i<n;i++){
        for(int j=i+2;j<n;j++){

            if(a[i]==a[j]){
                ans=true;
                break;
            }

        }
    }
    if(ans){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
}

int main(){
    int t;
    while(cin>>t){
        while(t--){
            solve();
          }

    }

}
