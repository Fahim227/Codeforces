#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){

        int a[n];
        int copya[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            copya[i]=a[i];
        }
        sort(copya,copya+n);
        int l=1,r=1,c=0;
        bool lflag=false;
        for(int i=0;i<n;i++){

            if(copya[i]!=a[i] && !lflag){
               // cout<<copya[i]<<" "<<a[i]<<"\n";
                l=i;
                //cout<<l<<"\n";
                lflag=true;
            }
            else if(copya[i]!=a[i]){
                //cout<<copya[i]<<" "<<a[i]<<"\n";
                r=i;
           // cout<<r<<"\n";
            }
            else{
                c++;
            }

        }
       // cout<<l<<" "<<r<<"\n";
        /*for(int i=l;i<(r+1)/2;i++){
            swap(a[i],a[r+1-i-1]);
        }*/
        reverse(a+l,a+r+1);
        /*for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        for(int i=0;i<n;i++){
            cout<<copya[i]<<" ";
        }*/
        bool flag=true;
        for(int i=0;i<n;i++){
            if(a[i]!=copya[i]){
                flag=false;
            }
        }
        if(!flag){
            cout<<"no\n";
        }
        else if(c==n){
            cout<<"yes\n";
            cout<<"1 1\n";
        }
        else if(flag){
            cout<<"yes\n";
            cout<<l+1<<" "<<r+1<<"\n";
        }
    }
}
