#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {

    int n,counter=0;
    string color;
    cin>>n;
    cin>>color;
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
            break;
        if(color[i]==color[i+1])
            counter++;
    }
    cout<<counter;
	return 0;

}
