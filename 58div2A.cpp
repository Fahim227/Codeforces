#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t,l,r,d;
    while(cin>>t){
            while(t--){
                cin>>l>>r>>d;
                int ans=0;
               /* if(d==1){
                        if(d<l){
                            cout<<d<<"\n";
                        }
                    else cout<<r+1<<"\n";
                    continue;
                }*/
                if(d<l || d>r){
                    ans=d;
                }
                else{
                    int di=r/d;
                    di++;
                    ans=di*d;

                }
                 cout<<ans<<"\n";


            }

    }
}
