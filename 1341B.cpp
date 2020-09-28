#include <bits/stdc++.h>
using namespace std;


void solve(){

   int n,k;
   cin>>n>>k;
   int a[n];
   for(int i=0;i<n;i++){
        cin>>a[i];
   }
   vector<int> v;
   for(int i=1;i<n;i++){
        if(a[i-1]<a[i] && a[i]>a[i+1]){
            v.push_back(i-1);
        }
   }
    /*for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }*/
   set<pair<int,int>> s;
   for(int i=0;i<v.size();i++){
        int peak=0;
        for(int j=v[i];j<=(v[i]+(k-1));j++){
            if(a[j-1]<a[j] && a[j]>a[j+1]){
               peak++;
            }
        }
        s.insert(make_pair(v[i],peak));

   }
   for(auto x:s){
       cout<<x.second<<" "<<x.first<<"\n";
   }


}
int main(){
    int t;
    while(cin>>t){
        while(t--){
            solve();
        }
    }
}
