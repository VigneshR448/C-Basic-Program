#include<iostream>
using namespace std;
int main()
{
  int n,i,j;
  cin>>n;
  for(i=1;i<=n;i++)
  {
    for(j=i;j<=n;j++)
    {
      cout<<j<<" ";
    }
    cout<<endl;
  }
  
}

/*o/p->
5
1 2 3 4 5 
2 3 4 5 
3 4 5 
4 5 
5 */
