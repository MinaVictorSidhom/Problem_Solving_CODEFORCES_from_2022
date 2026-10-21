#include<bits/stdc++.h>
using namespace std;


int main()
{
    //int inde = temp.find(s[i]);
    string s;
    int fre[10000],n,sum=0;
    cin>>n;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
    }
    for(int i=0;i<s.size();i++)
    {
        fre[s[i]]++;
    }
    for(int i=97;i<=122;i++)
    {
        if(fre[i]>0)
        {
            sum++;
        }
    }
   (sum==26)?cout<<"YES":cout<<"NO";
    return 0;
}
