#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=0;
    while(cin>>t){
        for(int i=1;i<=t;i++){
            string a,b,c;
            cin>>a>>b>>c;
            bool flag=false;
            for(int j=0;j<a.size();j++){
                if(a==b){
                     flag=true;
                }
                char temp=a[i];
                a[i]=c[i];
                c[i]=temp;
            }
            if(flag){
                cout<<"Yes"<<"\n";
            }
            else{
                cout<<"No"<<"\n";
            }
        }
    }


}
