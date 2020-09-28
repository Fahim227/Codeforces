#include <bits/stdc++.h>
#define num 1000
using namespace std;




int main(){

     int t;
     while(cin>>t){
        for(int i=1;i<=t;i++){
            int n;
            cin>>n;
            int a[n];
            int b[n];
            for(int j=0;j<n;j++){
                cin>>a[j];
            }
            for(int j=0;j<n;j++){
                cin>>b[j];
            }
            sort(a,a+n);
            sort(b,b+n);
            int add[n];
            for(int j=0;j<n;j++){
                add[j]=a[j]+b[j];
            }

            for(int j=0;j<n;j++){
                cout<<a[j]<<" ";
            }
            cout<<"\n";
            for(int j=0;j<n;j++){
                cout<<b[j]<<" ";
            }
            cout<<"\n";


        }


     }

}
