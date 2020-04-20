#include <bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false)
using namespace std;

int main(){
    fast;
    int n,m;
    while(cin>>n>>m){
        bool flag=false;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                char c;
                cin>>c;
                if(c=='C' || c=='M' || c=='Y'){
                    //cout<<"#Color\n";
                    flag=true;
                }
            }
        }
        if(!flag){
            cout<<"#Black&White\n";
        }
        else{
            cout<<"#Color\n";
        }
    }
}
