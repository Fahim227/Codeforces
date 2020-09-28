#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    while(cin>>n){
        string a="I hate it",a1="I hate that ";
        string b="I love it",b1="I love that ";
        string th=" that ";
        string ans="";
        if(n==1){
            cout<<"I hate it"<<"\n";
        }
        else{
            for(int i=1;i<=n ;i++){
                 if(i%2!=0 && i!=n){
                     ans+=a1;
                     //ans+=th;
                 }

                 else if(i%2==0 && i!=n){
                     ans+=b1;
                 }
                 else if(n%2==0 && i==n){
                    ans+=b;
                 }
                  else if(n%2!=0 && i==n){
                    ans+=a;
                 }
            }
           // ans-=th;
        //   eraseAllSubStr(str, " that ");
            //cout<<ans.length()<<"\n";
           // cout<<th.length()<<"\n";
            //int rem=ans.length()-th.length();
            //ans.erase(rem,(ans.length()-1));
            //cout<<rem<<"\n";
            cout<<ans<<"\n";
        }
    }

}
