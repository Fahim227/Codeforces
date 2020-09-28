#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false)
using namespace std;


int main(){
    fast;
    int a,b,n;
    while(cin>>a>>b>>n){
        while(true){
            n-=__gcd(a,n);
            if(n==0){
                cout<<"0\n";
                break;
            }
            n-=__gcd(b,n);
            if(n==0){
                cout<<"1\n";
                break;
            }

        }
    }


}
