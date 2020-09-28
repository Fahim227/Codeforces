#include <bits/stdc++.h>
using namespace std;
string s[22];
bool visit[22][22];
 int w,h;
int rec(int x,int y){
     if(x<0 || y<0 || x>=h || y>=w) return 0;
     if(visit[x][y] || s[x][y]=='#') return 0;
     visit[x][y]=1;
     return 1+rec(x+1,y)+rec(x-1,y)+rec(x,y+1)+rec(x,y-1);
}
int main(){
    int t;
    while(cin>>t){
         for(int tt=1;tt<=t;tt++){

              cin>>w>>h;
              int sx,sy;
              for(int i=0;i<h;i++){
                  cin>>s[i];
                  for(int j=0;j<w;j++){
                      if(s[i][j]=='@'){
                        sx=i;sy=j;
                      }
                  }
              }
              memset(visit,0,sizeof(visit));
              cout<<"Case "<<tt<<": "<<rec(sx,sy)<<"\n";
            //  for(int i=0;i<h;i++){
                //  for(int j=0;j<w;i++){
                      //cout<<s[1][3];
                  //}
             // }
         }
    }
}
