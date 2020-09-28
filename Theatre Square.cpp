#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n,m,a;
    while(cin>>n>>m>>a){
        ll x,y;
        x=n/a;
        y=m/a;
        if(n%a!=0){
            x++;
        }
        if(m%a!=0){
            y++;
        }
        cout<<x*y<<"\n";

    }
}
