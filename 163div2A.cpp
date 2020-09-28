#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin>>s){
        int a[26]={0};

        //cin>>s;
        //string str="";
        for(int i=0;i<s.length();i++){
            //cout<<str.find(s[i]);
            a[s[i]-'a']++;
        }
        int c=0;
        for(int i=0;i<26;i++){
            if(a[i]>0){
                c++;
            }
        }
         if(c%2==0){
            cout<<"CHAT WITH HER!\n";
        }
        else{
             cout<<"IGNORE HIM!\n";
        }


    }

}
