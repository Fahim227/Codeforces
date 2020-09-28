#include <bits/stdC++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        string s,str,strng="";
        cin>>s;
        int num=0;
        for(int i=0;i<n-1;i++){
            str=s.substr(i,2);
            //cout<<str<<" ";

            int ans=0;
            string stt;
            for(int j=i+1;j<n-1;j++){
                string strr=s.substr(j,2);
               // cout<<strr<<"\n";
                if(str==strr){
                    ans++;
                    stt=strr;
                   //cout<<strr<<"\n";

                }
               // cout<<ans<<"\n";


            }
            //cout<<ans<<"\n";
            if(ans>num){
                strng=stt;
                num=ans;

               // cout<<strng<<"\n";
            }

        }
        if(strng==""){
            cout<<s.substr(0,2)<<"\n";
            continue;
        }
        cout<<strng<<"\n";
    }
}
