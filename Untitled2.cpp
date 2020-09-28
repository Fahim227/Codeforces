
#include <iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<vector>
#include<stdlib.h>
#include<string>
#include<map>
#include<math.h>
#include<queue>
#include<stack>
#include<set>
#define inf 0x3f3f3f3f
#define eps 1e-5
#define max(a,b) (a)>(b)?(a):(b)
#define min(a,b) (a)<(b)?(a):(b)
using namespace std;
int gcd(int a,int b)
{
if(b==0)
return a;
return gcd(b,a%b);
}
int main()
{
int t,g,i,l;
while(~scanf("%d",&t))
{
while(t--)
{
scanf("%d%d",&g,&l);
if(l%g!=0)
{
printf("-1\n");
continue;
}
else
{
int ab=l/g;
int k=sqrt(ab+0.0);
bool flag=false;
for(i=1;i<=k;i++)
{
if(ab%i==0)
{
if(i<=ab/i)
{
if(gcd(ab/i,i)==1)
{
flag=true;
printf("%d %d\n",i*g,ab/i*g);
break;
}
}
}
}
if(!flag)
printf("-1\n");
}
}
}
return 0;
}
