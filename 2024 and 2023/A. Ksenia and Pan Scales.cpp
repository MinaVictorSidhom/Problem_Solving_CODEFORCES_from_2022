#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<map>
#include<iomanip>
#include <stdio.h>
#include <string.h>
#include<set>
#include<fstream>
#include<stack>
#include<queue>
using namespace std;
#define ll long long
#define speed  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define epsilon 1e-9
#define ed "\n"

bool preceed(int x,int y)
{
    return x>y;
}

int main()
{
    string s,s1,s2,k;
    cin>>s;
    cin>>k;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='|'){s1=s.substr(0,i);s2=s.substr(i+1,s.size()-1);
        break;}

    }
    for(int i=0;i<k.size();i++)
    {
        if(s1.size()>=s2.size()&&k[i]!=' ')s2+=k[i];
        else {s1+=k[i];}
    }
    if(s1.size()!=s2.size()){cout<<"Impossible";return 0;}
    cout<<s1<<'|'<<s2;
  return 0;
}
