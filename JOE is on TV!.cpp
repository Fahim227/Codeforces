#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){

        double ans=0;
        for(double i=n;i>0;i--){
            ans+=(1/i);
        }
        printf("%.12lf\n",ans);
    }
}
