#include <bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false)
using namespace std;

int main(){
    fast;
    int n,m;
    while(cin>>n>>m){
        int temp=m,ans=0;
        bool flag=true;
        if(n<m){
            while(temp!=n && flag){
                if(temp>n){
                    if((temp%2)==0){
                         temp/=2;
                         ans++;
                    }
                    else{
                        temp+=1;
                        ans++;
                    }

            }
            else if(temp<n){
                ans+=abs(temp-n);
                flag=false;
            }


           }
        }
        else {
            ans=abs(n-temp);
        }
        cout<<ans<<"\n";

    }
}
