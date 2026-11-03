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
    speed
     /*ll n,m;
    cin>>n>>m;
    ll c = 0;
    for(ll i=1;i<=n;i++){
        c+=(m+i%5)/5;
        cout<<c<<ed;
    }
    cout<<c;*/
    ll l,r;
    cin>>l>>r;
    if(l%2!=0){
        l++;
    }
    if(r-l<2)
        {cout<<-1;}
    else
        cout<<l<<" "<<l+1<<" "<<l+2;
}
