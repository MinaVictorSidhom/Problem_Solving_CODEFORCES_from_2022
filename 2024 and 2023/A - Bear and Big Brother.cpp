#include<iostream>
using namespace std;

int main()
{
    int a,b,counter=0;
    cin>>a>>b;
    for(int i=0;;i++)
    {
        if(a>b)
        {
            break;
        }
        else
        {
            counter++;
            a=a*3;
            b=b*2;
        }
    }
    cout<<counter;
    return 0;
}
