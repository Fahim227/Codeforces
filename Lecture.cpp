#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(cin>>n>>m){

        vector< pair<string,string> > s;
        for(int i=0;i<m;i++){
            string s1,s2;
            cin>>s1>>s2;
            s.push_back(make_pair(s1,s2));
        }
        for(int i=0;i<n;i++){

            string str;
            cin>>str;
            for(int j=0;j<m;j++){
                if(s[j].first == str || s[j].second ==str){
                        int l=s[j].first.length() ;
                        int ln=s[j].second.length();
                        if(l<ln){
                            cout<<s[j].first<<" ";
                        }
                        else if(ln<l){
                            cout<<s[j].second<<" ";
                        }
                        else{
                            cout<<s[j].first<<" ";
                        }
                }
            }

        }




    }
}
