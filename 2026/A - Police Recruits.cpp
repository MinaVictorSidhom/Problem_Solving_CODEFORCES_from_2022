#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {

    int n,untreated=0,police=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            police+=arr[i];
        }
        else
        {
            if(police==0)
                untreated++;
            else
                police--;
        }
    }
    cout<<untreated;
	return 0;

}
