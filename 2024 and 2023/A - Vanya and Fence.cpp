
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h,w,sum=0;
    cin>>n>>h;
    for(int i=1;i<=n;i++)
    {
        cin>>w;
        if(w>h)
        {
            sum+=2;
        }
        else
        {
            sum+=1;
        }
    }
    cout<<sum;
return 0;
}
