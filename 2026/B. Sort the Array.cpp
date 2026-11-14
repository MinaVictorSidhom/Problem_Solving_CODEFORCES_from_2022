#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left=-1,right=-1;

    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]&&left==-1)continue;
        else if(arr[i]>arr[i+1]&&left==-1)left=i;
        else if(arr[i]<arr[i+1]&&right==-1)
            right=i;
    }

     if(left==-1){
       cout<<"yes\n";
       cout<<"1 1"<<endl;
        return 0;
    }

    if(right==-1)
        right=n-1;

    reverse(arr.begin()+left,arr.end()-(n-1-right));

     for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
             cout<<"no\n";
             return 0;
        }
    }

    cout<<"yes\n";
    cout<<left+1<<" "<<right+1<<endl;
}
