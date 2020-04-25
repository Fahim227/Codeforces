#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,n,t;
    while(cin>>t){
        while(t--){
             cin>>a>>b>>c>>n;
             int ar[3];
             ar[0]=a;ar[1]=b,ar[2]=c;
             int mx=0;
             for(int i=0;i<3;i++){
                 mx=max(ar[i],mx);
             }
             int dif=0;
             for(int i=0;i<3;i++){
                dif+=abs(mx-ar[i]);
             }
             int temp;
             temp=abs(n-dif);
             if(temp%3==0 && n>=dif){
                cout<<"YES\n";
             }
             else{
                cout<<"NO\n";
             }

         }
    }
}
