#include<bits/stdc++.h>
using namespace std;


int main()
{
    int numberOfWires,arr[1000],shots,bird,wire;
    cin>>numberOfWires;
    for(int i=1;i<=numberOfWires;i++)
        cin>>arr[i];

    cin>>shots;
    for(int i=1;i<=shots;i++)
    {
        cin>>wire>>bird;
        arr[wire-1]+=(bird-1);
        arr[wire+1]+=arr[wire]-bird;
        arr[wire]=0;

    }
    for(int i=1;i<=numberOfWires;i++)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
}
