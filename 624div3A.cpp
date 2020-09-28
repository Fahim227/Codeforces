#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    while(cin>>t){
        for(int i=1;i<=t;i++){
            int a,b;
            cin>>a>>b;
            if(abs(a-b)==0){
                cout<<"0\n";
            }
            else if((a<b && abs(a-b)%2!=0) || (a>b && abs(a-b)%2==0)){
                cout<<"1\n";
            }
            else if(a>b && abs(b-a)%2!=0||(a<b && abs(a-b)%2==0)){
                cout<<"2\n";
            }




        }


    }


}
