#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin>>s){
        int c=0,cn=1;



            for(int i=1;i<s.length();i++){
            if(s[i]>=65 && s[i]<=90 && (s[0]>=97 && s[0]<=122)){
                c++;
            }
            else if(s[i]>=65 && s[i]<=90 && (s[0]>=65 && s[0]<=90)){
                cn++;
            }

         //cout<<cn<<"\n";
         if((s.length()-1)==c || cn==s.length()){
              for(int i=0;i<s.length();i++){
                if(s[i]>=97){
                    s[i]-=32;
                }
                else{
                    s[i]+=32;
                }

              }

             cout<<s<<"\n";

         }
         else{
            cout<<s<<"\n";
         }

    }
   }
}
