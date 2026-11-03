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
    int arr[]={0, 1, 3, 6, 10, 15, 21, 28, 36,
    45, 55, 66, 78, 91, 105, 120, 136, 153, 171, 190,
     210, 231, 253, 276, 300, 325,
    351, 378, 406, 435, 465, 496};
    int size=sizeof(arr)/sizeof(arr[0]);
    int n;bool flag=0;
    cin>>n;
    for(int i=0;i<size;i++)
    {
         if(arr[i]==n)flag=1;
    }
    (flag==0)?cout<<"NO":cout<<"YES";

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
   /* ll x;
    cin>>x;
    string s=to_string(x);
    for(ll i=0;i<s.size();i++)
    {

        if(s[i]=='9'&&i==0)cout<<'9';
        else if(s[i]-'0'>4)cout<<9-(s[i]-'0');
        else cout<<s[i];
    }*/

  return 0;
}
