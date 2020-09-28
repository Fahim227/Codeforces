#include <bits/stdc++.h>
using namespace std;
int w,h;
bool visit[22][22];
int dfs(vector<string> v,int i,int j){
    if(j>=w || i<0 || i>=h || j<0) return 0;
    if(visit[i][j] || v[i][j]=='#') return 0;
    visit[i][j]=1;
    return 1+dfs(v,i+1,j)+dfs(v,i-1,j)+dfs(v,i,j+1)+dfs(v,i,j-1);

}

int main(){
    int t;
    while(cin>>t){
        for(int c=1;c<=t;c++){
            cin>>w>>h;
            vector<string> v;
            int l,r;
            for(int i=0;i<h;i++){
                string s;
                cin>>s;
                for(int j=0;j<w;j++){
                    if(s[j]=='@'){
                        l=i;
                        r=j;
                    }
                }
                v.push_back(s);
            }
            /*for(int i=0;i<h;i++){
                cout<<v[i]<<"\n";
            }*/
            int ans=dfs(v,l,r);
            cout<<"Case "<<c<<": "<<ans<<"\n";
            v.clear();
            memset(visit,0,sizeof(visit));



        }

    }
}
