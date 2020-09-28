#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,l;
    while(cin>>n>>l){
        double x,y;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        x=abs(0-a[0]);
        y=abs(l-a[n-1]);
        int ar[n+1];
        int dif=0,j=0;
        int i;
        for(i=0;i<n;i++){
            ar[i]=abs(dif-a[i]);
            dif=a[i];

        }
        ar[i]=abs(a[n-1]-l);
        sort(ar,ar+(n+1));
        /*for(int i=0;i<n+1;i++){
            cout<<ar[i]<<" ";

        }*/
        double ans=max((ar[n]/2.0),max(x,y));
        printf("%.9lf\n",ans);
        //cout<<(ar[n])<<"\n";


    }
}
