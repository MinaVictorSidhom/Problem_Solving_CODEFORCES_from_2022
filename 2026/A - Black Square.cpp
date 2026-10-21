#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {

    int arr[4];
    long long calories{0};
    string seconds;

    for(int i{0};i<4;i++)
        cin>>arr[i];

    cin>>seconds;
    int length=seconds.size();
    for(int i{0};i<length;i++)
    {
        if(seconds[i]=='1')
            calories+=arr[0];
        else if(seconds[i]=='2')
            calories+=arr[1];
        else if(seconds[i]=='3')
            calories+=arr[2];
        else if(seconds[i]=='4')
            calories+=arr[3];
    }
    cout<<calories;
	return 0;

}
