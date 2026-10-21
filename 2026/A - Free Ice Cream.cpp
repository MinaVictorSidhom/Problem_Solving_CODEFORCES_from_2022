#include<bits/stdc++.h>
using namespace std;


int main()
{
    int lines,iceCreamInTheStart,distressed{0},icepacks;
    cin>>lines>>iceCreamInTheStart;
    long long count=iceCreamInTheStart;

    char Operator;
    for(int i{0};i<lines;i++)
    {
        cin>>Operator>>icepacks;
        if(Operator=='+')
            count+=icepacks;
        else
        {
            if(count>=icepacks)
                count-=icepacks;
            else
                distressed++;
        }
    }
    cout<<count<<" "<<distressed;
    return 0;
}

