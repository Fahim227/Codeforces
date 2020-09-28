#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    while(cin>>n>>t){

        int a[n];
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>a[i];
            v.push_back(a[i]);
        }
        sort(v.begin(),v.end());
        int idx = upper_bound(v.begin(),v.end(),t)-v.begin();
        if(v[idx]==t){
            cout<<"1\n";
        }
        else{
            int temp=t,sum=0,cnt=0;
            for(int i=0;i<n;i++){
                if(sum<temp){
                    cnt++;
                    sum+=a[i];
                }
            }
        cout<<cnt<<"\n";

        }


    }
}
