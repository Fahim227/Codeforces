#include <bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false)
using namespace std;

int main(){
    fast;
    int a,b,c;
    while(cin>>a>>b>>c){
        int ar[5];
        int one=a+b*c;
        //int two=a*b+c;

        ar[0]=one;
        int two=a*(b+c);

        ar[1]=two;
        int three=a*b*c;
        ar[2]=three;
        int four=(a+b)*c;
        ar[3]=four;
        int five=a+b+c;
        ar[4]=five;
        sort(ar,ar+5);
        cout<<ar[4]<<"\n";
    }


}
