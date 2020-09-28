#include <bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false)
#define ll long long int
using namespace std;

int main(){
    fast;
    ll n,k;
    while(cin>>n>>k){


       if(n%2!=0){
           ll d=(n+1)/2;
           ll ans=0;
           if(d>k){
                ll c=1;
                for(ll i=1;c<=k;i+=2){
                    ans=i;
                    c++;
                }

           }
           else if(d<k){
                ll c=d+1;
                for(ll i=2;c<=k;i+=2){
                    ans=i;
                    c++;
                }
           }
           else{
                ll c=1;
                for(ll i=1;c<=d;i+=2){
                    ans=i;
                    c++;
                }
           }
           cout<<ans<<"\n";


       }
       else{

           ll d=n/2;
           ll ans=0;
           if(d>k){
                ll c=1;
                for(ll i=1;c<=k;i+=2){
                    ans=i;
                    c++;
                }

           }
           else if(d<k){
                ll c=d+1;
                for(ll i=2;c<=k;i+=2){
                    ans=i;
                    c++;
                }
           }
           else{
                ll c=1;
                for(ll i=1;c<=d;i+=2){
                    ans=i;
                    c++;
                }
           }
           cout<<ans<<"\n";

           }


    }
}
