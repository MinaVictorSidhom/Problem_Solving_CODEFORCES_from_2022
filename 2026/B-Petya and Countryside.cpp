#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>Height(n);
    vector<int>counter(n,0);

    for(int i=0;i<n;i++){
        cin>>Height[i];
    }

    int x=0,after=1,before=0;

    while(after<n&&Height[x]>=Height[after]){
        counter[0]++;
        after++;
        before++;
    }
    for (int i = 1;i < n - 1;i++)
	{
		x = i, after = i + 1, before = i - 1;
		while (before >= 0 && Height[x] >= Height[before])
		{
			counter[i]++;
			x--;
			before--;
		}
		x = i;
		while (after <n && Height[x] >= Height[after])
		{
			counter[i]++;
 			x++;
			after++;
		}
	}

	x = n - 1; before = n - 2;
	while (before >= 0 && Height[x] >= Height[before])
	{
		counter[n - 1]++;
		x--;
		before--;
	}




	sort(counter.begin(), counter.end());

	cout << counter[counter.size() - 1] + 1;

	return 0;
}
