#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],i,op,count=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        int root=sqrt(arr[i]);
        if(root*root==arr[i])
        {
            op=arr[i];
            count=count+op;
            
        }
    }
    cout<<count;
}
