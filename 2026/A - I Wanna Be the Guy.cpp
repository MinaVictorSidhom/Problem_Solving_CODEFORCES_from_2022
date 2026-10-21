#include<bits/stdc++.h>
using namespace std;


int main()
{
    //int inde = temp.find(s[i]);//
    int Freq[110]={0};
    int x,p,q;
    int numbers;
    cin>>numbers;
    cin>>p;
   while(p--){
        cin>>x;
        Freq[x]++;
   }
   cin>>q;
   while(q--){
        cin>>x;
        Freq[x]++;
    }

    for(int i=1;i<=numbers;i++)
    {
        if(Freq[i]==0)
        {
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
    return 0;
}
