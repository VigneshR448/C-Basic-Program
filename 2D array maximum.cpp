#include<iostream>
using namespace std;
int main()
{
  int r,c;
  cin>>r>>c;
  int arr[r][c],i,j;
  
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      cin>>arr[i][j];
    }
  }
  int max=arr[0][0];
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
    if(arr[i][j]>max)
    {
      max=arr[i][j];
    }
  }
}
cout<<"The maximum element is "<<max;
return 0;
}
