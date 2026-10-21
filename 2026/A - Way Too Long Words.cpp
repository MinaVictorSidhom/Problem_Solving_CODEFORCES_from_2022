#include<bits/stdc++.h>
using namespace std;


int main()
{
    int numbersOfPhrases;
    cin>>numbersOfPhrases;

    while(numbersOfPhrases--){

    string phrase;
    cin>>phrase;
    int length=phrase.size();

    if(length>10)
        cout<<phrase[0]<<length-2<<phrase[length-1]<<"\n";
    else
        cout<<phrase<<"\n";

    }

    return 0;
}

