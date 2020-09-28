#include <bits/stdc++.h>
#define ff(i,a,b) for(int i=a; i<=b; i++)
#define fb(i,a,b) for(int i=a; i>=b; i--)
using namespace std;

int main(){
    int n;

    while(cin>>n){
        string s;
        cin>>s;
        int zero=0,one=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                zero++;
            }
            else{
                one++;
            }

        }
        cout<<abs(one-zero)<<"\n";
    }
}
