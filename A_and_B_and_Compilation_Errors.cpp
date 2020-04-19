#include <bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false)
using namespace std;

int main(){
    fast;
    int n;
    while(cin>>n){
        int suma=0;
        int sumb=0;
        int sumc=0;

        for(int i=0;i<n;i++){
            int temp;cin>>temp;
            suma+=temp;
        }
        for(int i=0;i<n-1;i++){
            int temp;cin>>temp;
            sumb+=temp;
        }
        for(int i=0;i<n-2;i++){
            int temp;cin>>temp;
            sumc+=temp;
        }
        cout<<suma-sumb<<"\n";
        cout<<sumb-sumc<<"\n";

    }

}
