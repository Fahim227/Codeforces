#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,p,x,y;
    while(cin>>n>>k>>p>>x>>y){
        int a[n];int sum=0;
        for(int i=0;i<k;i++){
            cin>>a[i];
            sum+=a[i];
        }

        int dif=x-sum;
        int remain=n-k;
        a[k]=y;
        dif-=y;
        remain--;
        sum+=y;
        int m=dif/remain;
        // cout<<sum<<"\n";
        for(int i=k+1;i<n;i++){
            a[i]=m;
            sum+=m;
            //cout<<sum<<"\n";
        }
        //cout<<sum<<"\n";
      /*  sort(a,a+n);
        int median = a[((n+1)/2)-1];*/

        if(sum>x || sum<y || dif<0){
            cout<<"-1";
        }
        else{
           for(int i=k;i<n;i++){
                cout<<a[i]<<" ";

           }
        }

    }

}
