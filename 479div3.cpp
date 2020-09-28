#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    while(cin>>n>>k){
        for(int i=1;i<=k;i++){
            int r=n%10;
            if(r!=0){
                n--;
                //cout<<n<<"\n";
            }
            else{
                n/=10;
                //cout<<n<<"\n";
            }
        }
        cout<<n<<"\n";
    }
}
