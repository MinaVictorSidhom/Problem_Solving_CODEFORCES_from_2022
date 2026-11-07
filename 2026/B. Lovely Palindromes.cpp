#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    string input;
    cin>>input;

    if(input=="1"){
        cout<<"11";
        return 0;
    }

    cout<<input;
    reverse(input.begin(),input.end());
    cout<<input;
}
