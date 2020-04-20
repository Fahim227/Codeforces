#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int t=0,c=0,prev=1,len=0;
        long long int add=0;
        int a[100000];//int c=0;
        for(int i=1;i<=n;i++){
            c=(i*(i+1))/2;
            add+=c;
            //cout<<add<<" ";
            //cout<<add<<" ";
            if(add<=n){
                a[i]=c;
                len++;
            }
            else{
                break;
            }

        }
        int ans=0;
        for(int i=1;i<=len;i++){
            //cout<<a[i]<<" ";
            if(a[i]!=0){
                ans++;
            }
        }
         cout<<ans<<"\n";



    }
}
