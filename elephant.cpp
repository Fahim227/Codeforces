#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        if(n<=5){
            cout<<"1\n";
        }
        else{
            int c=0;
            while(n>5){
                n-=5;
                c++;
            }
            if(n!=0){
                c++;
            }
            cout<<c<<"\n";
        }
    }
}
