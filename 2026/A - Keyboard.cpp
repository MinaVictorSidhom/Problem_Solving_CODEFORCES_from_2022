#include<bits/stdc++.h>
using namespace std;


int main()
{
    char leftOrRight;
    string keyBoard="qwertyuiopasdfghjkl;zxcvbnm,./"; //s;;upimrrfod;pbr
    string pressing;
    cin>>leftOrRight;
    cin>>pressing;

    int length=pressing.size();
    int lengthKeyboard=keyBoard.size();
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<lengthKeyboard;j++)
        {
            if(pressing[i]==keyBoard[j]&&leftOrRight=='R')
            {
                cout<<keyBoard[j-1];
                break;
            }
            else if(pressing[i]==keyBoard[j]&&leftOrRight=='L')
            {
                cout<<keyBoard[j+1];
                break;
            }
        }
    }
    return 0;
}
