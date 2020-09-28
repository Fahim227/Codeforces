#include <bits/stdc++.h>
#define num 1000
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int g=0;

    for(int i=1;i<sqrt(n);i++){
    for(int j=i+1;j<=sqrt(n);j++){
        g+=__gcd(i,j);
       }
    }
    cout<<g<<"\n";

    }
}
