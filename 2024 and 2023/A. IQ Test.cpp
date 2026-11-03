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
 /*
    int p = s.find('|');
    l = s.substr(0, p);
    r = s.substr(p + 1);
   */
    /* double x=355.66663448998;
    cout<<fixed<<setprecision(7)<<x;*/
int main()
{
    speed
    #ifndef ONLINE_JUDGE
    freopen("c.in","rt",stdin);
    #endif
    int arr[5][5];char x;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
           cin>>x;
           if(x=='#')
            arr[i][j]=1;
           else
            arr[i][j]=0;
        }
    }
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
    {
        int p=arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1];
        if(p!=2)
        {
            cout<<"YES";return 0;
        }
    }
    cout<<"NO";
    return 0;
} 
