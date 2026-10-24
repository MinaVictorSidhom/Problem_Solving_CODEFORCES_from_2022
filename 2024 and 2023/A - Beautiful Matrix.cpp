#include<bits/stdc++.h>
using namespace std;

int main()
{
  int rows,columns,lines,number;
  for(int i=1;i<=5;i++)
  {
      for(int j=1;j<=5;j++)
      {
          cin>>number;
          if(number==1){
            rows=i;
            columns=j;
          }

      }
  }
  cout<<abs(rows-3)+abs(columns-3);
  return 0;
}
