#include <iostream>
using namespace std;
int main()
{
int n,a;
cin>>n;
while(n!=0)
{
    a=n%10;
    cout<<a;
    n=n/10;
}

    return 0;
}
