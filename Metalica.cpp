#include <bits/stdc++.h>
#define num 1000000
#define loopf(i,n) for(int i=0;i<n;i++)
#define loopr(i,n) for(int i=n-1;i>=0;i--)
#define ll long long int
using namespace std;
int a[100000000];
vector<int> prime;
void seive(){
    a[1]=1;
    /*for(int i=4;i<=n;i+=2){
        a[i]=1;
    }*/
    prime.push_back(2);
    for(int i=3;i<=sqrt(num);i+=2){
        if(a[i]==0){
            for(int j=i*i;j<=num;j+=2*i) a[j]=1;
        }
    }
    for(int i=3;i<=num;i+=2){
        if(a[i]==0){
            prime.push_back(i);
        }
    }
}
void factorization(int n){
    int temp=n;

    for(int i=0;i<prime.size() && prime[i]<=n;i++){

        int cnt=0;
        if(n%prime[i]==0){
            while(n%prime[i]==0){

                cnt++;
                n/=prime[i];

            }
            //cout<<prime[i]
            //arr[prime[i]]+=cnt;
            //c=max(c,prime[i]);
            //cout<<temp<<" "<<prime[i]<<" "<<cnt<<" ";
        }



    }
    if(n>1){
       // cout<<n;
        //arr[n]+=1;
        // c=max(c,n);
    }
}

int lcm(int a,int b){
    return ((a*b)/__gcd(a,b));
}



int phi(int n){
    int result=n;

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
            result-=result/i;
        }

    }
    //cout<<result;
    if(n>1){
        result-=result/n;
    }
    //result*=num;
    return result;



}




//count divisor.............
int countdivisors(int n){
int cnt=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i==i){
                cnt++;
               // cout<<i<<" ";
            }
            else{
                cnt+=2;
                //cout<<i<<" "<<n/i<<" ";
            }

        }

    }
    return cnt;


}

void solve(){
   //solve problem here

}


int main(){
    seive();
    int t;
    while(cin>>t){
        while(t--){
           solve();
        }
    }





}

