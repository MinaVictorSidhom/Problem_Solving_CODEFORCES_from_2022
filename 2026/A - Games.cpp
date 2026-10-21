#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,sum{0};
    cin>>n;
    int home[n],guest[n];
    for(int i{0};i<n;i++)
    {
        cin>>home[i]>>guest[i];
    }
    for(int i{0};i<n;i++)
    {
        for(int j{0};j<n;j++)
        {
            if(home[i]==guest[j])
            {
                sum++;
            }
        }
    }
    cout<<sum;
return 0;
}
