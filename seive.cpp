#include <bits/stdc++.h>
#define n 10000
using namespace std;
int a[1000000];
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

int main(){
    seive();
    for(int i=0;i<prime.size();i++){
        cout<<prime[i]<<" ";
    }
    //cout<<a[997]<<" ";

}
