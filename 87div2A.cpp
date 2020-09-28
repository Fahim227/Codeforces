#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    while(cin>>t){
    int a,b;
    int mx=0,sum=0;

        while(t--){
            cin>>a>>b;
            sum-=a;
            sum+=b;
            mx=max(mx,sum);

        }
        cout<<mx<<"\n";
    }
}
