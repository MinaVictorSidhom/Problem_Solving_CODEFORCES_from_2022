#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int uppers=0,lowers=0;
    cin>>s;
    int size=s.size();
    for(int i=0;i<size;i++)
    {
        char c=s[i];
        ((int)c>=65&&(int)c<=90)?uppers++:lowers++;
    }
    if(uppers>lowers)
    {
        for(int i=0;i<size;i++)
        {
            cout<<(char)toupper(s[i]);;
        }
    }
    else{
        for(int i=0;i<size;i++)
        {

            cout<<(char)tolower(s[i]);
        }
    }

	return 0;
}
