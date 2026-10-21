#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tests,x;
    cin>>tests;
    while(tests--){
        cin>>x;
        if(x<67)
        {
            cout<<x+1<<"\n";
        }
        else
        {
            cout<<67<<"\n";
        }

    }
    return 0;
}
