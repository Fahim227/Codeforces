#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int a[]={4,7,47,74,477,474,744};
        bool flag=false;
         for(int i=0;i<7;i++){
            if(n%a[i]==0){
                cout<<"YES\n";
                flag=true;
                break;
            }

         }
         if(!flag)
            cout<<"NO\n";



    }
}
