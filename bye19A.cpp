#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(cin>>t){
        int n,a,b;
        while(t--){
            cin>>n>>a>>b;
            vector<int> c;
            vector<int> d;
            std::vector<int>::iterator it;
            for(int i=1;i<=a;i++){
                int temp;cin>>temp;
                c.push_back(temp);
            }
            for(int i=1;i<=b;i++){
                int temp;cin>>temp;
                d.push_back(temp);
            }
            it=find(c.begin(),c.end(),n);
            if(it!=c.end()){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }

    }

}
