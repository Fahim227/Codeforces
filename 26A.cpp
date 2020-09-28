#include <bits/stdc++.h>
#define num 1000000
#define ll long long int
using namespace std;
int a[1000000];
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
int main(){
    seive();
    int n;
    while(cin>>n){
        int ans=0;
        for(int i=1;i<=n;i++){
               int c=0;
                // i/prime[j]!=prime[j] && i/prime[j]!=1
            for(int j=0;(j<prime.size()) && (prime[j]<=i);j++){
                if(i%prime[j]==0){
                      // cout<<i<<" ";
                        c++;
                        //break;


                }
            }
            if(c==2){
                ans++;
            }

        }

        cout<<ans<<"\n";
    }

}
