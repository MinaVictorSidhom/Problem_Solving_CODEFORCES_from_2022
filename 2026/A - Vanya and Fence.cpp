#include<iostream>
using namespace std;

int main()
{
	int n,h,w,cnt=0;
	cin>>n>>h;
	for(int i=0;i<n;i++)
    {
        cin>>w;
        if(w>h)
            cnt+=2;
        else
            cnt++;
    }
    cout<<cnt;

   return 0;
}
