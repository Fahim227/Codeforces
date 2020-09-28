#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    while(cin>>t){
        while(t--){
            int n;
            cin>>n;
            string s;
            cin>>s;
            int a=0;

            while(true){
                bool change=false;
                for(int i=0;i<n-1;i++){
                    if(s[i]=='A' && s[i+1]=='P'){
                        s[i+1]='A';
                        change=true;
                        i+=1;
                        //cout<<"h ";



                    }
                }
                if(!change){
                    break;
                }

                a++;


            }

            cout<<a<<"\n";

        }

    }
}
