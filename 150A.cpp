#include <bits/stdc++.h>
#define n 10000000000000
//#defiine ll long long int
using namespace std;
//long long int a[1000000000];
vector<long long int> a;
vector< long long int> prime;
vector< long long int> d;

/*void seive(){
    a[1]=1;
    /*for(int i=4;i<=n;i+=2){
        a[i]=1;

    }*/
    /*prime.push_back(2);
    for( long long int i=3;i<=sqrt(n);i+=2){
        if(a[i]==0){
            for( long long int j=i*i;j<=n;j+=2*i) a[j]=1;
        }
    }
    for( long long int i=3;i<=n;i+=2){
        if(a[i]==0){
            prime.push_back(i);
        }
    }
}*/

/*long long int NOD( long long int num){

    //ll div=1;
    for( long long int i=0;i<=sqrt(num);i++){

        if(num%prime[i]==0){

             long long int c=0;
            while(num%prime[i]==0){
                c++;
               d.push_back(prime[i]);
                num/=prime[i];
            }
           // div*=(c+1);
        }

    }
    if(num!=1){
        //do something
        d.push_back(num);

    }
    //return div;
}//vector<int>    //vector<int> fac*/
void countdivisors(long long num){
 //   long long int cnt=0;
    for(long long k=2; num>1 &&k<=sqrt(num);){
        if(num%k==0){
           d.push_back(k);
           num/=k;
        }
        else{
            k++;
        }

    }
    if(num>1){
        d.push_back(num);
    }
   // return cnt;
}

int main(){
    //seive();
    long long num;
    while(cin>>num){
        //NOD(num);
        countdivisors(num);
        if(d.size()<=1){
            cout<<"1"<<"\n"<<"0\n";
        }
        else if(d.size()==2){
            cout<<"2\n";
        }
        else{
            cout<<"1"<<"\n"<<d[0]*d[1]<<"\n";
        }
        d.clear();

    }


}
