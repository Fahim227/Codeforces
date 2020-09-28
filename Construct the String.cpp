#include <bits/stdc++.h>
using namespace std;

int main(){
     int n,a,b,t;
     while(cin>>t){
        while(t--){
            cin>>n>>a>>b;
             string s="";
             int as=97+b;
             //s=(char)as;
             for(int i=97;s.length()<n && i<=as;){
                  s+=(char)i;
                  i++;
                  if(i==as){
                    i=97;
                  }
             }
             cout<<s<<"\n";


        }

     }


}
