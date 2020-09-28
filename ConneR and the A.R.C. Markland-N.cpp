#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    while(cin>>t){
        while(t--){
            int n,s,k;
            cin>>n>>s>>k;

           // memset(a,0,sizeof(a));
            vector<int> v;

            for(int i=1;i<=k;i++){
                int temp;cin>>temp;
                v.push_back(temp);
            }

            int c1=INT_MAX,c2=INT_MAX;
            for(int i=s;i<=n;i++){
                 if(!count(v.begin(),v.end(),i)){
                    c1=i;
                    break;
                 }
            }
             for(int i=s;i>0;i--){
                 if(!count(v.begin(),v.end(),i)){
                    c2=i;
                    break;
                 }
            }
           // cout<<c1<<" "<<c2<<"\n";
            cout<<min(abs(s-c1),abs(s-c2))<<"\n";


        }
    }
}
