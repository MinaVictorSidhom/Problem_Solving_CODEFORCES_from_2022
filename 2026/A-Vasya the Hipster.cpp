#include <iostream>
#define all(v) ((v).begin(),(v).end())
#define sz(v) ((int)((v).size()))
//typedef vector<int> vi;
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    cout<<min(a,b)<<" "<<(max(a,b)-min(a,b))/2;
}
