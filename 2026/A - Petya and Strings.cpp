#include<bits/stdc++.h>
using namespace std;

int main()
{
  string firstString,secondString;
  cin>>firstString>>secondString;
  int f,s;
  int lengthOfString=firstString.size();


  for(int i=0;i<lengthOfString;i++)
  {
      f=tolower(firstString[i]);
      s=tolower(secondString[i]);
      if(f<s)
      {
          cout<<"-1";
          return 0;
      }
      else if(f>s)
      {
          cout<<"1";
          return 0;
      }
  }
  cout<<"0";
   return 0;
}
