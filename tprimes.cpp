#include <bits/stdc++.h>
#define ll long long int
#define n 1000000
using namespace std;


#define n 1000000
using namespace std;
int a[10000001];
vector<int> prime;
void seive(){
    a[0]=a[1]=1;
    for(int i=4;i<=n;i+=2){
        a[i]=1;

    }
    prime.push_back(2);
    for(int i=3;i<=sqrt(n);i+=2){
        if(a[i]==0){
            for(int j=i*i;j<=n;j+=2*i) a[j]=1;
        }
    }
    for(int i=3;i<=n;i+=2){
        if(a[i]==0){
            prime.push_back(i);
        }
    }
}
int main(){
     ios_base::sync_with_stdio(false);
     seive();
    ll t;
    while(cin>>t){

        while(t--){

            ll num,h;
            cin>>num;
           // cout<<a[num]<<" ";
            h=sqrt(num);
            if(!a[h] && h*h==num){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }

        }
    }
}




