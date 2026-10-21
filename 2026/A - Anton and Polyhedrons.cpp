#include<bits/stdc++.h>
using namespace std;


int main()
{
    //int inde = temp.find(s[i]);

    int Tetrahedron,Cube,Octahedron,Dodecahedron,Icosahedron,ployhedrons;
    long long sum=0;
    string temp;
    cin>>ployhedrons;
    for(int i=0;i<ployhedrons;i++)
    {
        cin>>temp;
        if(temp=="Tetrahedron")
            sum+=4;
        else if(temp=="Cube")
            sum+=6;
        else if(temp=="Octahedron")
            sum+=8;
        else if(temp=="Icosahedron")
            sum+=20;
        else if(temp=="Dodecahedron")
            sum+=12;
    }
    cout<<sum;
    return 0;
}
