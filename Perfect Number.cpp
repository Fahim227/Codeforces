#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
            int ans=0,idx=0;
        for(int i=1,j=19;i<=n;j++){

            int temp=j;
            int sum=0;
            while(temp){
                sum+=temp%10;
                temp/=10;
            }
            if(sum==10){
                i++;
                ans=j;
                idx=i;
            }


        }
        cout<<ans<<"\n";



    }
}
