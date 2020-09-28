#include <iostream>
#include <bits/stdc++.h>


using namespace std;
int main()
{
     int a[1000],i,cnt=-1;
    int x,y,z;
    cin>>x>>y>>z;
    a[0]=0;
    for(i=1;i<=1000;i++)
    {
       a[2*i-1]= a[2*i-2]+x;
       a[2*i]=a[2*i-1]-y;
       if(a[2*i-1]== z )
       {
           cout<<2*i-1<<endl;
           cnt++;
           break;
       }
       else if (a[2*i]== z)
       {
           cout<<2*i<<endl;
           cnt++;
           break;
       }


    }
     if(cnt==-1)
    {
        cout<< cnt ;
    }

}
