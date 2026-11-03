#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    int n;
    string Word,Encoded="";
    cin>>n>>Word;

    if(n==1||n==2)
    {
        cout<<Word;
        return 0;
    }

    Encoded.insert(Encoded.begin(),Word[0]);
    for(int i=1;i<n;i++){

        if(i%2==0)
           Encoded+=Word[i];
        else
            Encoded.insert(Encoded.begin(),Word[i]);
    }

    if(n%2==0)
    {
        reverse(Encoded.begin(),Encoded.end());
        cout<<Encoded;
    }
    else
        cout<<Encoded;


}
