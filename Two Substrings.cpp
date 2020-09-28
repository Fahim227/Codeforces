#include <bits/stdc++.h>
using namespace std;

int main(){
      string s;
    while(cin>>s){
            int c=0;
            bool ab=false,ba=false;
            for(int i=0;i<s.length()-1;i++){

                if((s[i]=='A' && s[i+1]=='B') &&!ab){
                    i+=1;
                    ab=true;
                }
                else if(ab && (s[i]=='B' && s[i+1]=='A')){
                    i+=1;
                    ba=true;
                }
                //cout<<i<<" ";

            }
            /*if (ba){
                cout<<"YES\n";
            }*/

            bool ab1=false,ba1=false;
            for(int i=0;i<s.length()-1;i++){

                if((s[i]=='B' && s[i+1]=='A') && !ba1){
                    i+=1;
                    ba1=true;
                }
                else if(ba1 && (s[i]=='A' && s[i+1]=='B')){
                    i+=1;
                    ab1=true;
                }
                //cout<<i<<" ";

            }
            if (ab1 || ba){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }

    }
}
