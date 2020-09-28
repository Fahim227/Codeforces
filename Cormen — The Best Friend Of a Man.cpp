
#include <bits/stdC++.h>
using namespace std;

int main(){
    int n,k;
    while(cin>>n>>k){
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=0;
        for(int i=0;i<n-1;i++){

            while((a[i]+a[i+1])<k){
                a[i+1]++;
                ans++;
            }

        }
        cout<<ans<<"\n";
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";



    }
}
