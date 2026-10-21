#include<bits/stdc++.h>
using namespace std;


int main()
{
   int priceOfShovels,changes,temp,count{1};
   cin>>priceOfShovels>>changes;
   temp=priceOfShovels;

   while(true)
   {
       if(temp%10==0||temp%10==changes)
        break;

       count++;
       temp+=priceOfShovels;
   }
   cout<<count;
    return 0;
}
