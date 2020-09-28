#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll k,n,w;
    while(cin>>k>>n>>w){

        ll sum=0;
        for(int i=1;i<=w;i++){
            sum+=i*k;
        }
        ll borrow=sum-n;
        if(borrow>=0){
            cout<<borrow<<"\n";
        }
        else{
            cout<<"0\n";
        }

    }
}
