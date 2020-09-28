#include <bits/stdc++.h>
#define ll long long
using namespace std;
double f[1000010];
void fac(){
    for(ll i=1;i<1000010;i++){
        f[i]=log(i)+f[i-1];
    }


}

int main(){
    fac();
    int t;
    ll n,b;
    while(cin>>t){

    	for(int i=1;i<=t;i++){
                cout<<"Case "<<i<<": ";
    	   	   cin>>n>>b;

    		   ll ans=floor(f[n]/log(b))+1;
               cout<<ans<<"\n";


    	}

    }



    }




