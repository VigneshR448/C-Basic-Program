#include<iostream>
using namespace std;
int main()
{
  int n,i,j,k;
  cin>>n;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
      cout<<" ";
    }
    for(k=1;k<=2*i-1;k++)
    {
      cout<<"*";
    }
    cout<<"\n";
  }
  for(i=n-1;i>=1;i--)
  {
    for(j=1;j<=n-i;j++)
    {
      cout<<" ";
    }
    for(k=1;k<=2*i-1;k++)
    {
      cout<<"*";
    }
    cout<<endl;
  }
}
