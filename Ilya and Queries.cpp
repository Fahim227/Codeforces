#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false)
using namespace std;


int main(){
    fast;
    string s;
    while(cin>>s){
        int n,l,r;
        cin>>n;
        int a[100010]={0};
        for(int i=1;i<s.length();i++){

                 a[i]=a[i-1]+(s[i]==s[i-1]);


        }
        /*for(int i=0;i<s.length();i++){
            cout<<a[i]<<" ";

        }*/
        while(n--){
            cin>>l>>r;
            int ans=0;
            l--;r--;
            cout<<abs(a[l]-a[r])<<"\n";

        }


    }


}
