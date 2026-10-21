#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tests,arr[7];
    cin>>tests;
    while(tests--){
            int sum=0;
        for(int i=0;i<7;i++)
    {
        cin>>arr[i];

    }
    sort(arr,arr+7);
    for(int i=0;i<6;i++){
       sum+=(-arr[i]);
    }
    cout<<sum+arr[6]<<"\n";
    }
    return 0;
}
