#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    while(cin>>n){
        int a[]={0,0,0,0,0};
        for(int i=1;i<=n;i++){
             int j;cin>>j;
             a[j]++;
        }
        int res=a[4];
        a[4]=0;
        while(a[3]){
            if(a[1]){
                a[1]--;
                a[3]--;
                res++;
            }
            else{
                res++;
                a[3]--;
            }
        }
      // cout<<a[4]<<" "<<a[3]<<res;
      res+=a[2]/2;


      if(a[2]%2!=0){
        a[1]+=2;
      }
      res+=a[1]/4;
      if(a[1]%4!=0){
        res++;
      }
    /*  a[2]%=2;
      // cout<<res<<" ";

       if(a[1]>=a[2] && a[2]!=0 && a[1]!=0){
            int temp=a[2]*2;
            while(temp!=4){
                temp++;
                a[1]--;
            }res++;

       }
       else if(a[2]==1){

        a[2]--;
        res++;
       }


       if(a[1]!=0){
        while(a[1]){
            a[1]-=4;
            res++;
            //cout<<res<<" ";
        }
       }*/
       cout<<res<<"\n";


    }
}
