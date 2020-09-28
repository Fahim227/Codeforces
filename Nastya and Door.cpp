#include <bits/stdc++.h>
using namespace std;
/*
5
8 6
1 2 4 1 2 4 1 2
5 3
3 2 3 2 1
10 4
4 3 4 3 2 3 2 1 0 1
15 7
3 7 4 8 2 3 4 5 21 2 3 4 2 1 3
7 5
1 2 3 4 5 6 1
3 2
2 2
2 1
3 1
2 3

*/

int main(){
    int t;
    while(cin>>t){
        while(t--){
            int n,k;
            cin>>n>>k;
            int a[n];
            for(int i=0;i<n;i++){
                int temp;cin>>temp;
                a[i]=temp;
            }
            /*for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }*/
           // cout<<"\n";
            int l=0,r=0,p=1;
            bool first=true;
            for(int i=1;i<n-1;i++){
                if(a[i-1]<a[i] && a[i]>a[i+1] && first){
                    l=i-1;r=i+1;
                    p+=1;
                    first=false;
                }
                else if(a[i-1]<a[i] && a[i]>a[i+1]){
                    r=i+1;
                    p+=1;
                }
            }
           // cout<<r<<"\n";
            l++;r++;

            int mainl=0;
            for(int i=1;i<=l;i++){
                if((r-i+1)==k){
                   mainl=i;
                  // cout<<i<<"\n";
                }
            }
            cout<<p<<" "<<mainl<<"\n";

        }


    }
}
