#include<iostream>
using namespace std;

int main(){
    int n ,number;
    int arr[100005];

    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>number;
        arr[number]=i;
    }

    long long Vasya=0, Petya=0;
    int M;
    cin>>M;

    while(M--){
        int q;
        cin>>q;

        Vasya+=arr[q], Petya+=n-arr[q]+1;
    }

    cout<<Vasya<<" "<<Petya;

}
