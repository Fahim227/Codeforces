#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int ans=0,lim=n/2;
        for(int i=1;i<=lim;i++){
            if(n%i==0){
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
}
