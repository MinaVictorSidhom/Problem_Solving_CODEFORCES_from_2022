#include<iostream>
#include<string>
using namespace std;

int main()
{
    string n;
    int x=11;
    cin>>n;

    if(n.length()<2)
    {
        cout<<0;
        return 0;
    }
    int count=0;
    while(x>=10)
    {
        x=0;
        for(int i=0;i<n.length();i++){
            x+=(n[i]-'0');
        }
        n=to_string(x);
        count++;
    }
    cout<<count;
    return 0;
}
