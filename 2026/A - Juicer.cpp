#include<bits/stdc++.h>
using namespace std;


int main()
{
   int oranges,maxsize,empties,counter=0;
   long long sum=0;
   cin>>oranges>>maxsize>>empties;
    int orange;
    for(int i=0;i<oranges;i++)
    {
        cin>>orange;
        if(orange<=maxsize)
            sum+=orange;
        if(sum>empties)
        {
            counter++;
            sum=0;
        }
    }

    cout<<counter;

    return 0;
}
