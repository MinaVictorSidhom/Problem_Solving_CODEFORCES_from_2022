#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[100],Resultarr[100];
    for(int i=1;i<=n;i++)
        cin>>arr[i];

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==arr[i])
            {
                Resultarr[j]=i;
                break;
            }
        }
    }


    for(int j=1;j<=n;j++)
    {
        cout<<Resultarr[j]<<" ";
    }

    return 0;
}
