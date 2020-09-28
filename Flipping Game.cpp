#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int a[n];
        int s=0,e=0;
        bool st=true,en=false;
        for(int i=0;i<n;i++){

            cin>>a[i];
            if(a[i]==0 && st){
                s=i;st=false;
            }
            else if(a[i]==0){
                e=i;
            }
        }
        for(int i=s;i<=e;i++){
            if(a[i]==0){
                a[i]=1;
            }
            else{
                a[i]=0;
            }
        }
        int one=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                one++;
            }
        }
        cout<<one<<"\n";

    }
}
