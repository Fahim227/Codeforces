#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        vector<int> v;
        int odd=0,even=0,oddidx=0,evenidx=0;
        for(int i=0;i<n;i++){
            int temp;cin>>temp;
            if(temp%2==0){
                even++;
                evenidx=i;
            }
            else{
                odd++;
                oddidx=i;
            }
            v.push_back(temp);
        }
        if(even>odd){
            cout<<oddidx+1<<"\n";
        }
        else{
            cout<<evenidx+1<<"\n";
        }

    }


}
