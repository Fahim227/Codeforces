#include <bits/stdc++.h>
using namespace std;
vector<int> a[1000];
int visit[1000];

void dfs(int s){

    cout<<s<<"\n";

    if(!visit[s]){

        visit[s]=1;

        for(int i=0;i<a[s].size();i++){

            if(!visit[a[s][i]]){

                dfs(a[s][i]);
            }
        }
    }
}
int edge_id[1000];
void dfsStack(int s,int n){

    for(int i=0;i<n;i++) edge_id[i]=0;

    stack<int> S;
    S.push(s);
    while(!S.empty()){

        int u=S.top();
        S.pop();

        while(edge_id[u]<a[u].size()){
            int v=a[u][edge_id[u]];
            edge_id[u]++;
            if(!visit[v]){
                visit[v]=1;
                S.push(u);
                S.push(v);
                break;
            }


        }
    }
    visit[s]=1;

}

int main(){
    int n=5;
    while(n--){
        int p;cin>>p;
        int q;cin>>q;
        a[p].push_back(q);
    }
    //dfs(0);
    dfsStack(0,5);
      for(int i=0;i<=7;i++){
        cout<<i<<"->"<<visit[i]<<"   ";
    }
    //cout<<a[0][1];


}
