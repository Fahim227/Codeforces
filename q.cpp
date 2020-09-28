#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n,t;
    while(cin>>n>>t){
        string s;
        cin>>s;
        for(int i=1;i<=t;i++){
            for(int j=0;j<n-1;j++){
                if(s[j]=='B' && s[j+1]=='G'){
                    char c=s[j];
                    s[j]=s[j+1];
                    s[j+1]=c;
                    j++;
                }
            }
        }
        cout<<s<<"\n";
    }
}
