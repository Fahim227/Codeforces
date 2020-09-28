#include <bits/stdc++.h>
using namespace std;


void solve(){
    string s;
    cin>>s;

    int one=0,two=0,three=0,ans=INT_MAX,finalleft=0,finalright=0;
    int left=0,right=s.length()-1;
    while(left<right){
         for(int i=left;i<=right;i++){
              if(s[i]=='1'){
                one=1;
              }
              else if(s[i]=='2'){
                two=1;
              }
              else if(s[i]=='3'){
                three=1;
              }
         }
         if(one && two && three){
            finalleft=left;
            finalright=right;
            //cout<<right<<" "<<left<<"\n";
            ans=min(ans,(right-left));
            one=0;two=0;three=0;
            left++;
            right--;
         }
         else{
            break;
         }

    }
    //cout<<finalleft<<" "<<finalright<<"\n";
    for(int i=finalleft;i<=finalright;i++){
        for(int j=i;j<=finalright;j++){
              if(s[j]=='1'){
                one=1;
              }
              else if(s[j]=='2'){
                two=1;
              }
              else if(s[j]=='3'){
                three=1;
              }
         }
         if(one && two && three){
            finalleft=i;
            one=0;two=0;three=0;
         }
         else{
            break;
         }
    }
     for(int i=finalright;i>=finalleft;i--){
        for(int j=i;j>=finalleft;j--){
              if(s[j]=='1'){
                one=1;
              }
              else if(s[j]=='2'){
                two=1;
              }
              else if(s[j]=='3'){
                three=1;
              }
         }
         if(one && two && three){
            finalright=i;
            one=0;two=0;three=0;
         }
         else{
            break;
         }
    }
    if(finalleft==0 && finalright==0){
        cout<<finalleft<<"\n";
    }
    else{
        cout<<finalright<<" "<<finalleft<<"\n";
    }
    //cout<<finalright<<" "<<finalleft<<"\n";

    //cout<<ans+1<<"\n";

}
int main(){
    int t;
    while(cin>>t){
        while(t--){
            solve();
        }
    }
}
