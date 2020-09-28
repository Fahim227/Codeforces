#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){

        string s;
        cin>>s;
        int l=0,r=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                l--;
            }
            else if(s[i]=='R'){
                r++;
            }
        }
        cout<<abs(l-r)+1<<"\n";
    }
}
