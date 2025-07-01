#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int sqr=n*(n);
  int temp=n;
  int digit=0;
  while(temp>0)
  {
    digit++;
    temp=temp/10;
  }
  int mod=pow(10,digit);
  if(sqr%mod==n)
  {
    cout<<"Automorphic Number";
  }
  else
  {
    cout<<"Not Automorphic Number";
  }
}
