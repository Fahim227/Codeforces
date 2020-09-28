#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
         double sum=0;
         for(int i=1;i<=n;i++){
             double temp;cin>>temp;//v.push_back(temp);
             temp=100/temp;
             sum+=(1/temp);
         }
        // cout<<sum<<" ";
        printf("%.12f\n",(sum/n)*100);
        // cout<<(sum/n)*100<<"\n";
    }
}
