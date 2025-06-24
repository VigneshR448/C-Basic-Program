#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n],i,j,max=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        if(max<arr[i][j])
        {
            max=arr[i][j];
        }
        }
        cout<<max<<endl;
    }
}
