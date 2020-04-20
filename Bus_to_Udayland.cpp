#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){

        bool flag=false;
        vector<string> v;
        int k,l;
        string s;
        for(int j=0;j<n;j++){

            cin>>s;
            for(int i=0;i<=4;i++){
                if(s[i]=='O' && s[i+1]=='O' && flag==false){
                	cout<<"YES\n";
                    flag=true;
                   // cout<<"++";
                   //k=i;l=i+1;
                    i++;
                }
                else{
                    //cout<<s[i];
                }
            }
          //  cout<<s<<"\n";
            v.push_back(s);
        }
        if(!flag){
            cout<<"NO\n";
        }
        //for(int i=0;i<v.size();i++) {cout<<v[i]<<"\n";}
        else{
            bool fl=false;
            for(int j=0;j<v.size();j++){
                for(int i=0;i<=4;i++){
                    if(v[j][i]=='O' && v[j][i+1]=='O' && fl==false){
                        v[j][i]='+';
                        v[j][i+1]='+';
                        fl=true;
                        i++;
                    }
                }

            }
            for(int i=0;i<v.size();i++) {cout<<v[i]<<"\n";}

        }


    }
}
