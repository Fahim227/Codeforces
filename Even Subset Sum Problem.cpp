#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    while(cin>>t){
        while(t--){
            int n;cin>>n;
            int a[n];
            int odd=0,even=0;
            for(int i=0;i<n;i++){
                cin>>a[i];
                if(a[i]%2==0){
                    even++;
                }
                else{
                    odd++;
                }
            }
            if(even!=0){
                cout<<even<<"\n";
                for(int i=0;i<n;i++){

                        if(a[i]%2==0){
                            cout<<i+1<<" ";
                        }


                }
                cout<<"\n";
            }
            else if(odd%2==0){

                cout<<odd<<"\n";
                for(int i=0;i<n;i++){

                        if(a[i]%2!=0){
                            cout<<i+1<<" ";
                        }


                }
                cout<<"\n";
            }
            else if(odd>1 && odd%2!=0){
                cout<<odd-1<<"\n";
                for(int i=0,j=1;i<n && j<odd;i++){

                        if(a[i]%2!=0){
                            cout<<i+1<<" ";
                            j++;
                        }


                }
                cout<<"\n";
            }
            else{
                cout<<"-1\n";
            }

        }
    }
}
