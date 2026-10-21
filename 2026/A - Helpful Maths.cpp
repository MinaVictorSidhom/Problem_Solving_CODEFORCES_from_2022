#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int length=s.size();
    for(int i=0;i<length;i++)
    {
        if(i==length-1)
            cout<<s[i];
        else
        {
            if(s[i]=='1')
                cout<<"1+";
            else if(s[i]=='2')
                cout<<"2+";
            else if(s[i]=='3')
                cout<<"3+";
        }
    }

    return 0;
}

