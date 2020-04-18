#include <bits/stdc++.h>
using namespace std;

int countDivisors(int n,int s)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(s); i++) {
        if (s % i == 0) {
            // If divisors are equal,
            // count only one
            if (s / i == i){
                if(s/i<=n)
                    cnt++;
              //  cout<<num/i<<" ";
            }


            else{
                if((s/i)<=n && i<=n){
                    cnt = cnt + 2;

                }


            } // Otherwise count both

                //cout<<i<<" "<<num/i<<" h";
        }
    }
    return cnt;
}



int main(){
    int n,s;
    while(cin>>n>>s){
             cout<<countDivisors(n,s)<<"\n";
    }

}
