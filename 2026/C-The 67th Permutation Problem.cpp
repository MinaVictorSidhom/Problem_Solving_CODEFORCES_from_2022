#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tests,x;
    cin>>tests;
    while(tests--){

        cin>>x;
        vector<int> gcd; int l=1,r=3*x;
        for(int i=0;i<x;i++)
        {
            gcd.push_back(r-1);
            gcd.push_back(l);
            gcd.push_back(r);

            l++;r-=2;
        }

        for(int i=0;i<3*x;i++)
        {

            cout<<gcd[i];
            if(i+1==3*x) cout<<"\n";
            else cout<<" ";
        }
    }
    return 0;
}
