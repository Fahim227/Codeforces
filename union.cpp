#include<bits/stdc++.h>
#include<string.h>
#include<algorithm>
#define MAX 200008
using namespace std;
long int par[MAX],v,e,cou;
struct node
{
    long  int node1;
    long int node2;
    long int cost;
};
node arr[MAX];
void make_set(long int n)
{
    long int i;
    for(i=0; i<n; i++)
    {
        par[i]=i;
    }
}
long int find_set(int n)
{
    if(par[n]!=n)
       par[n]=find_set(par[n]);
    return par[n];

}
bool comp(node x,node y)
{

        return x.cost<y.cost;

}
long int  Union(long int x,long int y)
{
  long   int ux,uy;
    ux=find_set(x);
    uy=find_set(y);
    if(ux==uy)
    {
        return 0;
    }
    else
    {
        cou++;
        //cout<<cou<<" ";
        par[ux]=uy;
        return 1;
    }
}

int main()
{

    long int i,j,k,ux,uy,sum,x,allcost;
    while(scanf("%ld %ld",&v,&e)&&v&&e)
    {
        make_set(v);
        allcost=0;
        for(i=0; i<e; i++)
        {
            scanf("%ld %ld %ld",&arr[i].node1,&arr[i].node2,&arr[i].cost);
            allcost+=arr[i].cost;

        }
        sort(arr,arr+e,comp);
        for(int i=0;i<e;i++){
            cout<<arr[i].node1<<" "<<arr[i].node2<<" "<<arr[i].cost<<" \n";
        }
        cou=0;
        sum=0;
        for(i=0; i<e; i++)
        {
            ux=arr[i].node1;
            uy=arr[i].node2;
            x=Union(ux,uy);
            if(x!=0)
            {
                //cout<<sum<<" ";
                sum+=arr[i].cost;
            }
            if(cou==v)
                break;
        }
       // printf("%ld\n",allcost-sum);
    }



}
