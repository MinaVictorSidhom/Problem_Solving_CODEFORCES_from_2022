#include <iostream>
#include <string>
using namespace std;

int main() {
    int n,k,flag=0,goodNumbers=0;
    string digits="0123456789";
    cin>>n>>k;
    string arr;
    while(n--)
    {
        cin>>arr;
        for(int i=0;i<=k;i++)
        {
            if(arr.find(digits[i])==-1)
                flag=1;
        }
        if(flag==0)goodNumbers++;
        flag=0;
    }
    cout<<goodNumbers;
}
