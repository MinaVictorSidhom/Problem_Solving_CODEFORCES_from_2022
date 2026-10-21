#include<bits/stdc++.h>
using namespace std;
int main()
{
    string berl,birl;
    cin>>berl>>birl;
    int len=berl.size();
    if(berl.size()!=birl.size()){cout<<"NO";return 0;}
    for(int i=0;i<len;i++)
    {
        if(berl[i]!=birl[len-i-1])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
