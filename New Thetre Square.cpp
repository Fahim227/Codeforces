#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    vector<string> v;
    for(int i=0;i<n;i++){
        string str;cin>>str;
        v.push_back(str);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int adcjdots=0,dots=0;
        for(int j=0;j<m;j++){
            if(v[i][j]=='.' && v[i][j]==v[i][j+1]){
                adcjdots+=2;
                j++;
            }
            else if(v[i][j]=='.'){
                dots++;
            }
        }


        //cout<<adcjdots<<" "<<dots<<"\n";
        if(y<(x+x)){
            ans+=(adcjdots%2)*x;
            ans+=(adcjdots/2)*y;
            ans+=(dots)*x;
        }
        else{
            ans+=adcjdots*x;
            ans+=dots*x;
        }

    }
    cout<<ans<<"\n";

}

int main(){
    int t;
    while(cin>>t){
        while(t--){
            solve();
        }
    }
}

