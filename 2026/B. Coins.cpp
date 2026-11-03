#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
    map<char,int> mp;
    mp.insert(pair<char,int>('A',0));
    mp.insert(pair<char,int>('B',0));
    mp.insert(pair<char,int>('C',0));

    string coins;
    cin>>coins;
    (coins[1]=='>')?mp[coins[0]]++:mp[coins[2]]++;

    cin>>coins;
    (coins[1]=='>')?mp[coins[0]]++:mp[coins[2]]++;

     cin>>coins;
    (coins[1]=='>')?mp[coins[0]]++:mp[coins[2]]++;

    if(mp['A']==1&&mp['B']==1&&mp['C']==1)
        cout<<"Impossible";
    else
    {
        /*
        A>B
        C<B
        A>C
        Map[(A,2),(B,1),(C,0)]
        == cout<<CBA
        */
        if(mp['A']==0)cout<<'A';
        else if(mp['B']==0)cout<<'B';
        else if(mp['C']==0)cout<<'C';

        if(mp['A']==1)cout<<'A';
        else if(mp['B']==1)cout<<'B';
        else if(mp['C']==1)cout<<'C';

        if(mp['A']==2)cout<<'A';
        else if(mp['B']==2)cout<<'B';
        else if(mp['C']==2)cout<<'C';
    }
    return 0;
}
