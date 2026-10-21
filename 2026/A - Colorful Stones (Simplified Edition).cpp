#include<bits/stdc++.h>
using namespace std;


int main()
{
    string stones,instrucions;
    int counter=1,i=0;
    cin>>stones>>instrucions;
    int size=instrucions.size();

    for(int j=0;j<size;j++)
    {
        if(instrucions[j]==stones[i])
        {
            counter++;i++;

        }
    }
    cout<<counter;
    return 0;
}
