#include <bits/stdc++.h>
#define ll int
using namespace std;

int main(){
    int n;
    while(cin>>n){
        ll a[n];
        for(int i=0;i<n;i++){
            ll temp;cin>>temp;
            a[i]=temp;
        }
        sort(a,a+n);
        if(n%2==0){
            ll sum=a[(n/2)-1] + a[(n/2)];
            double ans=(sum+0.0)/2;
            printf("%.1lf\n",ans);
        }
        else{
            cout<<a[n/2]<<"\n";
        }
    }
}
