#include<bits/stdc++.h>
using namespace std;

int main()
{
   string boyOrGirl;
   int distinctLetters=0,flag=1;
   cin>>boyOrGirl;
   int len=boyOrGirl.size();
   for(int i=0;i<len;i++)
   {
       for(int j=i+1;j<len;j++)
       {
           if(boyOrGirl[i]==boyOrGirl[j])
            {
                flag=0;
                break;
            }
     }
      if(flag==1)
        distinctLetters++;

     flag=1;
   }
   (distinctLetters%2==0)?cout<<"CHAT WITH HER!":cout<<"IGNORE HIM!";
   return 0;
}
