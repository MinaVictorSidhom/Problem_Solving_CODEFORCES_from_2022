#include<iostream>
using namespace std;

int main()
{
   int p,t,d,n,cnt=0;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>p>>t>>d;
       if(p+t+d>=2)
        cnt++;
   }
   cout<<cnt;
   return 0;
}
