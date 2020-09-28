#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.length();i++){
        sum+=a[(s[i]-'0')-1];
    }
    cout<<sum<<"\n";
}
