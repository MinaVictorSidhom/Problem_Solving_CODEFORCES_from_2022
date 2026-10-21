#include<bits/stdc++.h>
using namespace std;


int main()
{
    int count{0};
    string Letters;
    getline(cin,Letters);
    int length=Letters.size();
    sort(Letters.begin(),Letters.end());
    for(int i{0};i<length;i++)
        {
          if(Letters[i]>=97&&Letters[i]<=122)
          {
              if(Letters[i]!=Letters[i+1])
                count++;
          }

        }
        cout<<count;
    return 0;
}
