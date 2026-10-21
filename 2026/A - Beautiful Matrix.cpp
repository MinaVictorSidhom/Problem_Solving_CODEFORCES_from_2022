//#include<bits/stdc++.h>
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int x;
    int sum=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>x;
            if(x==1)
            {
                sum=abs(i-3)+abs(j-3);
                break;
            }

        }
    }
    cout<<sum;
    return 0;
}
