#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    int moves{0},strt{0};
    int size=s.size();
    for(int i{0};i<size;i++)
    {
        int steps=s[i]-97;
        int walk=abs(strt-steps);
        if(walk<13)
        {
            moves+=walk;
        }
        else
            moves+=26-walk;
        strt=steps;
    }
    cout<<moves;
    return 0;
}
