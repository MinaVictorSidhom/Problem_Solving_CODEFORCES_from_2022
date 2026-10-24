#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,problems=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        if(a+b+c>1)
            problems++;
    }
    cout<<problems;
    return 0;
}
