#include <bits/stdc++.h>
#define n 1000000
using namespace std;
int a[10000001];
vector<int> prime;
void seive(){
    a[1]=1;
    /*for(int i=4;i<=n;i+=2){
        a[i]=1;

    }*/
    prime.push_back(2);
    for(int i=3;i<=sqrt(n);i+=2){
        if(a[i]==0){
            for(int j=i*i;j<=n;j+=2*i) a[j]=1;
        }
    }
    for(int i=3;i<=n;i+=2){
        if(a[i]==0){
            prime.push_back(i);
        }
    }
}

int countDivisors(int num)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            // If divisors are equal,
            // count only one
            if (num / i == i)
                cnt++;

            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    return cnt;
}



int NOD(int num){

    int div=1;
    for(int i=0;i<=sqrt(num);i++){

        if(num%prime[i]==0){

            int c=0;
            while(num%prime[i]==0){
                c++;
                cout<<prime[i]<<" ";
                num/=prime[i];
            }
           // div*=(c+1);
        }

    }
    if(num!=1){
        //do something
        cout<<num<<" ";
    }
    return div;
}//vector<int>    //vector<int> fac

int main(){
    seive();
    /*for(int i=0;i<prime.size();i++){
        cout<<prime[i]<<" ";
    }*/
    //cout<<a[1000000]<<" ";
    /*factors(516650);
    cout<<"\n";
    factors(238336);
    cout<<"\n";
    factors(636916);*/
    cout<<countDivisors(16);


}
