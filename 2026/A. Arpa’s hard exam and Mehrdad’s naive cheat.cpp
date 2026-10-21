#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define speed  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    speed;
    int num;
    cin>>num;
    if(num==0)cout<<1;
    else if(num%4==1)cout<<8;
    else if(num%4==2) cout<<4;
    else if(num%4==3) cout<<2;
    else if(num%4==0) cout<<6;
      return 0;
}
