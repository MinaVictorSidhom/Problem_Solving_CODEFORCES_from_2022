#include<bits/stdc++.h>
using namespace std;
int main()
{
    int countZeros=0,countOnes=0,size;
    string  numbers;
    cin>>size;
    cin>>numbers;
    for(int i=0;i<size;i++)
    {
        if(numbers[i]=='0')
        {
            countZeros++;
        }
        else
        {
            countOnes++;
        }
    }
    (countOnes>=countZeros)? cout<<countOnes-countZeros : cout<<countZeros-countOnes;
      return 0;
}
