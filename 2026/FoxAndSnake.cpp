#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;
    if(m>0){
       for (int i = 1; i<=n; i++){
           if(!(i%2==0)){
               for(int x=0;x<m;x++){
                   cout<<'#';
               }
           }
           else if(i%4==0){
               cout<<'#';
               for(int y=1;y<m;y++){
                   cout<<'.';
               }
           }
           else{
               for(int z=1;z<m;z++){
                   cout<<'.';

               }
               cout<<'#';
           }
           cout<<endl;
       }
    }


    return 0;
}
