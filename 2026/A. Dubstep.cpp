#include<bits/stdc++.h>
using namespace std;


int main()
{
    //int inde = temp.find(s[i]);

    string remix,separate="";
    cin>>remix;
    int length=remix.size();

    for(int i=0;i<length;)
    {
        if(remix[i]=='W'&&remix[i+1]=='U'&&remix[i+2]=='B')
        {
            i+=3;
            if(separate.size()!=0)separate+=' ';
        }
        else
        {
            separate+=remix[i];
            i++;
        }
    }
    cout<<separate;
    return 0;
}
