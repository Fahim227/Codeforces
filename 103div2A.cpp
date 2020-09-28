#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int max=a[0],c=0;
        for(int i=1;i<n;i++){
            if(a[i]>a[0]){
                int temp=a[0];
                a[0]=a[i];
                a[i]=a[0];
                c++;
            }
        }
        //a[0]=max;
       // int min=a[n-1];
        for(int i=n-2;i>=0;i--){
            if(a[i]<a[n-1]){
                int temp=a[n-1];
                a[n-1]=a[i];
                a[i]=temp;
                c++;
            }
        }
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
       cout<<c<<"\n";
    }
}
