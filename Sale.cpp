#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(cin>>n>>m){

       int a[n];
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
       sort(a,a+n);
       int sum=0;

       for(int i=0;i<m;i++){
           if(a[i]<0){
               sum+=abs(a[i]);

           }


       }
      /* if(sum<=0){
            cout<<"0\n";
       }*/
       //else{
            cout<<sum<<"\n";
       //}

    }
}
