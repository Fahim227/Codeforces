#include <bits/stdc++.h>
using namespace std;

int main(){
    int two,three,five,six;
    while(cin>>two>>three>>five>>six){
        int c=0;
        while(two!=0 && five!=0 && six!=0){
            c++;
            two--;five--;six--;
        }

        //cout<<c<<" "<<two<<five<<six<<"\n";
        int cn=0;
        while(three!=0 && two!=0){
            cn++;
            three--;two--;
        }
        int sum=0;
        for(int i=1;i<=c;i++){
            sum+=256;
        }
        for(int i=1;i<=cn;i++){
            sum+=32;
        }
        cout<<sum<<"\n";
    }
}
