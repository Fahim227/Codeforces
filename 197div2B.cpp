#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,m;
    while(cin>>n){
        cin>>m;
        queue<int> q;
        /*for(int i=1;i<=m;i++){
            int temp;cin>>temp;
            q.push(temp);
        }*/
        ll start=1,c=0;
        for(ll i=1;i<=m;i++){
            ll temp;cin>>temp;
            if(start<=temp){
                c+=abs(temp-start);
                //cout<<c<<" ";
            }
            else if(start>temp){
                c+=(n-start+temp);
                //cout<<c<<" ";
            }
            start=temp;
            //cin>>temp;


        }


        /*while(!q.empty()){
            int des=q.front();

            for(;start!=des;start++){
                if(start==n){
                        //cout<<start<<" ";
                    start=0;
                    c++;
                }
                else{
                    //cout<<start<<" ";
                    c++;
                }

            }
            start=q.front();
            q.pop();
        }*/
        cout<<c<<"\n";

    }

}
