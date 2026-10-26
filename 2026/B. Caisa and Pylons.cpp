#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int pylons,x=0,y,energy=0,dolars=0;
    cin>>pylons;

    for(int i=1;i<=pylons;i++)
    {
        cin>>y;
        energy+=x-y;
        if(energy<0)
        {
            dolars+= -energy;
            energy=0;
        }
        x=y;
    }
    cout<<dolars;
}
/*
#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int pylons;
    cin>>pylons;
    vector<long long>Height(pylons);

    for(int i=0;i<pylons;i++){
        cin>>Height[i];
    }
    sort(Height.begin(),Height.end());
    cout<<Height[pylons-1];
}
*/
