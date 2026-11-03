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
 /*   int t;
    cin>>t;
    while(t--)
    {
    string st;int ans=0;
    cin>>st;
    map<char,ll>mp;
    for(auto x:st){mp[x]++;}
    ll size=mp.size();
    if(size==4||size==3)
       {
        cout<<4<<ed;
       }
        else if(size==1){
                cout<<-1<<ed;
        }else
            {
            for(auto y:mp)
            {
            if(y.second==3){
                cout<<6<<ed;
                ans=1;
                break;
            }
        }
       if(ans==0)cout<<4<<ed;
    }
    }
*/
    ll x;
    cin>>x;
    string s=to_string(x);
    for(ll i=0;i<s.size();i++)
    {

        if(s[i]=='9'&&i==0)cout<<'9';
        else if(s[i]-'0'>4)cout<<9-(s[i]-'0');
        else cout<<s[i];
    }
  return 0;
}
