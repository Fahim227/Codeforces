#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(cin>>n>>m){

        long long int mn=0,mx=0;
        long long int num=n;
        long long int d=n/m;
        long long int r=n%m;
        // cout<<r<<"\n";
        long long int c=0;
        //cout<<r<<" "<<d<<"\n";
        while(r){

            long long int temp=d+1;
            r--;
            mn+=((temp-1)*temp)/2;
            c++;

        }
        mn+=(((d-1)*d)/2)*(m-c);
        num-=(m-1);
        mx=((num-1)*num)/2;
        cout<<mn<<" "<<mx<<"\n";
        /*for(int i=1;i<=m;i++){
           // if(((d-1)*d)/2){
                if(r){

                    int temp=d+1;
                    r--;
                    mn+=((temp-1)*temp)/2;
                }
                else{
                    int temp=d;
                    mn+=((temp-1)*temp)/2;
                }

            //}


        }*/


    }
}
