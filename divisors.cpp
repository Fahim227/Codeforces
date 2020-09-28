#include <bits/stdc++.h>
//#define n 10000
#define ll long long int
using namespace std;
/*int a[100000];
vector<int> prime;
void seive(){
    a[1]=1;
    /*for(int i=4;i<=n;i+=2){
        a[i]=1;

    }*//*
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
}*/
/*int NOD(ll num){

    ll div=1;
    for(int i=0;i<=sqrt(num);i++){

        if(num%prime[i]==0){

            ll c=0;
            while(num%prime[i]==0){
                c++;
                num/=prime[i];
            }
            div*=(c+1);
        }

    }
    if(num!=1){
        //do something
    }
    return div;
}*/

ll countdivisors(ll num){
    ll cnt=0;
    for(ll k=1;k<=sqrt(num);k++){
        if(num%k==0){
            if(num/k==k){
                cnt++;
            }
            else{
                cnt+=2;
            }
        }
    }
    return cnt;
}

/*long long int divisorcount(long long int n)
{
int s,count=0;
for(i=1;i*i<=n;i++)
{
 if(n%i==0)
 count+=2;
 s=i;
 if(s*s==n)
 count--;

}
	return count;
}*/









int main(){
    ll n,i,j,k,l,p,h,t,mx,answer;
    //seive();
    /*for(int i=0;i<prime.size();i++){
        cout<<prime[i]<<" ";
    }
    //cout<<a[997]<<" ";*/
   // cout<<NOD(36)<<" ";
  // ll t;
  // cin>>t;
   /*while(scanf("%lld",&t)!=EOF){
        while(t--){
        ll l,u;
        cin>>l>>u;
        ll res=1,mx=0;
        for(ll j=l;j<=u;j++){
                if(divisorcount(j)>res){
                    mx=j;
                    res=divisorcount(j);
                }
            //res=max(res,countdivisors(j));
           // mx=j;
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",l,u,mx,res);
       // cout<<mx<<res<<"\n";
      }
   }*/
   while(scanf("%lld",&t)!=EOF)
	{
	 while(t--)
	 {
	  scanf("%lld %lld",&l,&h);
	  	 mx=countdivisors(l);
	  	 answer=l;
	  	 for(j=l+1;j<=h;j++){
            k=countdivisors(j);
            if(k>mx){
			 mx=k;
			 answer=j;
		     }
		 	}
		 printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",l,h,answer,mx);
	}
	}
}



