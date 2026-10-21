#include<bits/stdc++.h>
using namespace std;

int main()
{
   int columns;
   cin>>columns;
   int arr[columns];
   for(int i=0;i<columns;i++)
   {
       cin>>arr[i];
   }
   sort(arr,arr+columns);

   for(int i=0;i<columns;i++)
   {
       cout<<arr[i]<<" ";
   }
   return 0;
}
