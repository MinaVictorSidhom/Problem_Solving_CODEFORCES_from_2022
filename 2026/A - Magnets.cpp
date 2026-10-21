//#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {

    int magnets,numbers,start,groups=1;
    cin>>magnets;
    cin>>start;
    for(int i=1;i<magnets;i++)
    {
        cin>>numbers;
        if(numbers!=start)
        {
            groups++;
            start=numbers;
        }
    }
    cout<<groups;
	return 0;

}
