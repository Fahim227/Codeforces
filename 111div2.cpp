#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(cin>>n){
        `vector<int> v;
        for(int i=0;i<n;i++){
            int temp;cin>>temp;
            v.push_back(temp);
        }
        //for(int i=0;i<n;i++) cout<<v[i]<<" ";

        sort(v.begin(),v.end());
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=v[i];
        }
        int ans=0,c=0;
        //cout<<sum<<"\n";
        for(int i=n-1;i>=0;i--){
            ans+=v[i];
            int temp=abs(ans-sum);
            //cout<<temp<<"\n";
            if(temp<ans){
                c++;
                //cout<<c<<"\n";
                break;
            }

                c++;
                //cout<<c<<"\n";

        }
        cout<<c<<"\n";

    }


}
