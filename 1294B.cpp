#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;

   while(cin>>t){
        while(t--){
            int n;
            cin>>n;
            set<pair<int,int>> s;
            for(int i=1;i<=n;i++){
                int x,y;cin>>x>>y;
                s.insert(make_pair(x,y));
            }
            int currx=0,curry=0;
            string str="";
            bool flag=true;
            for(auto x:s){
               // cout<<x.first<<" "<<x.second<<"\n";
               currx=x.first-currx;
               curry=x.second-curry;
               if(currx<0 || curry<0){
                    cout<<"NO\n";
                    flag=false;
                    break;

               }
               else{
                    for(int i=1;i<=currx;i++){
                        str+="R";
                    }
                    for(int i=1;i<=curry;i++){
                        str+="U";
                    }
                    currx=x.first;
                    curry=x.second;

               }
            }
            if(flag){
                cout<<"YES\n"<<str<<"\n";
            }

        }
   }



}


