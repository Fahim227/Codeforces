#include <bits/stdc++.h>
using namespace std;
bool cmp(const pair<int,int>&a,const pair<int,int>&b){
    return (a.second>b.second);
}
int main(){
    int  w,h,u1;
    int h1,u2,h2;
    while(cin>>w>>h>>u1>>h1>>u2>>h2)
    {
        int ans=w;
        for(;h>0;h--){
            ans=ans+h;
            if(h==h1){
                ans=max(ans-u1,0);
            }
            if(h==h2){
                ans=max(ans-u2,0);
            }
        }
        cout<<ans<<"\n";

    }
}
