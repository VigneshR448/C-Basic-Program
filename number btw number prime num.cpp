#include<iostream>
using namespace std;
int main()
{
    int a,b,i,prime;
    cin>>a>>b;
    while(a<b)
    {
        prime=1;
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            {
                prime=0;
                break;
            }
        }
            if(prime)
            {
                cout<<a<<" ";
            }
            a++;
        }
    }
