#include <bits/stdc++.h>
using namespace std;

int main(){
        int t;
        while(cin>>t){
           while(t--){
                int a,b,n,s;
                cin>>a>>b>>n>>s;
                int q=s/n;
                int r=s%n;
                if(n==1){
                    if(a+b>=s){
                        cout<<"YES\n";

                   }
                }
               else{
                   /*int sum=q*n;
                   //int diff=s-mul;
                   bool flag=false;
                   if(sum==s){
                        flag=true;
                   }
                   for(int i=1;sum<=s && i<=b;i++){

                        sum++;
                        if(sum==s){
                            flag=true;
                            break;
                        }

                   }*/
                   if(a*n+b>=s){
                        cout<<"YES\n";
                   }
                   else{
                        cout<<"NO\n";
                   }



               }


        }
    }
}
