#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int a[]={0,0,0,0,0};
        for(int i=1;i<=n;i++){
            int temp;cin>>temp;
            a[temp]++;
        }
        //cout<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4];
        if(a[1]==n){
            int ans=a[1]/4;
            a[1]=a[1]%4;
            if(a[1]>0){
                ans++;
          }
          cout<<ans<<"\n";
        }
        else{
            int res=a[4];
            while(a[3]!=0){
                res++;
                if(a[1]!=0) a[1]--;
                a[3]--;
            }//cout<<a[1]<<"\n";

            res+=(a[2]/2);

            if(a[2]%2>0){
                a[1]-=2;
                res++;
            }
            if(a[1]>0){
                res+=(a[1]);
            }
            cout<<res<<"\n";
        }
    }
}
