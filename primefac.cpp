#include <bits/stdc++.h>
using namespace std;



#define SIZE 10000
vector < int > prime;
int a[SIZE];
void prime_sieve ( int n ) {
    int sqrtn = sqrt ( n );
    prime.push_back( 2 );
    for ( int i = 3; i <= sqrtn; i += 2 ) {
        if ( a[i] == 0 ) {
            for ( int j = i * i; j <= n; j += 2 * i ) a[j] = 1;
        }
    }
    for ( int i = 3; i <= n; i += 2 ) if ( a[i] == 0 ) prime.push_back( i );
}

void factorization(int n,bool flag){
   // string res;
    /*if(elem<0){
        res="-1";
    }
    /*else{
        res="1";
    }*/
    //ostringstream st;
      for(int i=0; i<prime.size(); i++) {
            while(n % prime[i] == 0 && n != 1) {
                if(flag) {
                    printf(" %d", prime[i]);
                    flag = false;
                } else
                    printf(" x %d", prime[i]);
                n /= prime[i];
            }
        }

        if(n != 1) {
            if(flag)
                printf(" %d", n);
            else
                printf(" x %d", n);
        }

        printf("\n");
    }









int main(){
    ios_base::sync_with_stdio(false);
    int n;
    prime_sieve(10000);
    //cout<<a[997]<<" \n";

    while(cin>>n){
             bool flag=true;

                /*for(int i=0;i<=prime.size();i++){
                    cout<<prime[i]<<" ";
                }*/
        cout<<n<<" =";
        if(n<0){
            //cout<<-1<<" ";

            n =-n;
            cout<<" -1";
            flag=false;
        }
        /*else if(n>0){
            cout<<n<<" = ";
           // flag=true;
        }
        else{
            break;
        }*/

        factorization(n,flag);

    }
}
