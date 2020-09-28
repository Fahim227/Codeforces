#include <bits/stdc++.h>
using namespace std;
int phi(int n){
    int result=n;

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
            result-=result/i;
        }

    }
    //cout<<result;
    if(n>1){
        result-=result/n;
    }
    //result*=num;
    return result;



}
int main(){
     int n;
     int ans;
    while(cin>>n){
    if(n==0){
        break;
    }
    else{
     ans=phi(n);
    }
    cout<<ans<<"\n";
    }

}
