#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2,s3;
    while(cin>>s1>>s2>>s3){
        int a[91]={0};
        int ans[91]={0};
        int start=65,en=90;
        for(int i=0;i<s1.size();i++){
            a[(int)s1[i]]++;

        }
        for(int i=0;i<s2.size();i++){
            a[(int)s2[i]]++;

        }
        /*for(int i=start;i<=en;i++){
            cout<<a[i]<<" ";

        }*/
        for(int i=0;i<s3.size();i++){
            ans[(int)s3[i]]++;

        }
        bool flag=true;
        for(int i=start;i<=en;i++){
            if(a[i]!=ans[i]){
                flag=false;
                break;
            }

        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }




    }

}
