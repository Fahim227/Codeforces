#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    while(cin>>t){
            while(t--){
                int n;
                cin>>n;
                int a[n],b[n];
                for(int i=0;i<n;i++){
                    cin>>a[i];
                }
                for(int i=0;i<n;i++){
                    cin>>b[i];
                }
                int temp=0;
                set<int> v;
                int l=0,r=0,c=1;
                bool allzero=true,senior=false;

                for(int i=0;i<n;i++){
                    int temp = b[i]-a[i];
                    if(temp!=0 && c==1){
                        l=i;
                        r=i;
                        c++;
                    }
                    else if(temp!=0){
                        r=i;
                        allzero=false;
                    }
                   // else if(temp)
                }
                for(int i=0;i<n;i++){
                    if(b[i]<a[i]){
                        senior=true;
                    }
                }
                //cout<<senior<<"\n";
                if( senior){
                    cout<<"NO\n";
                }
                else if(allzero){
                    cout<<"YES\n";
                }
                else{
                    set<int> s;
                   // bool flag=true;
                    for(int i=l;i<=r;i++){
                        s.insert(b[i]-a[i]);

                    }
                    if(s.size()==1){
                         cout<<"YES\n";
                    }
                    else{
                         cout<<"NO\n";
                    }
                }

            }

    }
}
