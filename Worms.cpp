#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int a[100010];
    int sum=0;
    for(int i=0;i<n;i++){
        int temp;cin>>temp;
        sum+=temp;
        a[i+1]=sum;
    }

    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int temp;cin>>temp;
            cout<<lower_bound(a,a+n,temp)-a<<"\n";


    }



}
