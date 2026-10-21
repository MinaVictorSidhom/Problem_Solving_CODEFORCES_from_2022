#include<bits/stdc++.h>
using namespace std;


int main()
{

    string alphabet="abcdefghijklmnopqrstuvwxyz";
    string password="";
    int numberOfCharacters,distinict;
    cin>>numberOfCharacters>>distinict;

    for(int i=0;i<numberOfCharacters;i++)
    {
        password+=alphabet[i%distinict];
    }
    cout<<password;
    return 0;
}

