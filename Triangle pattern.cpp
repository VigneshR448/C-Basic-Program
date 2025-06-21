#include<iostream>
using namespace std;
int main()
{
    int n, i,j,sp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(sp=0;sp<i;sp++)
        {
            cout<<" ";
        }
        for(j=0;j<n-i;j++)
        {
            cout<<"*";  //"* " space given means printing inverted pramid
        }
        cout<<endl;
    }
}
