#include<bits/stdc++.h>
using namespace std;


int main()
{
    //int inde = temp.find(s[i]);
    string x,tm1,tm2;
    int teamOne=1,teamTwo=0;
    int numberOflines;
    cin>>numberOflines;
    string arr[101];
    for(int i =0;i<numberOflines;i++)
    {
        cin>>arr[i];
    }
    x=arr[0];
    tm1=arr[0];
    for(int i=1;i<numberOflines;i++)
    {
        if(arr[i]==x)
            teamOne++;
        else
            {teamTwo++;tm2=arr[i];}

    }
    (teamOne>teamTwo)?cout<<tm1:cout<<tm2;
    return 0;
}
