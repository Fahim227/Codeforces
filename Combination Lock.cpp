#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        string a,b;
        cin>>a>>b;
        int ans=0;
        for(int i=0;i<n;i++){
            int num1=a[i]-'0';
            int num2=b[i]-'0';
            ans+=min(abs(num1-num2),10-abs(num1-num2));
        }
        cout<<ans<<"\n";
    }
}
