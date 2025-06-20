#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int first=1,second=2;//op-> 1 2 
    cout<<first<<" "<<second<<" ";
    for(int i=0;i<n-2;i++)
    {
        int third=first+second;
        cout<<third<<" ";//-> 1+2=3 // 2+3=5  // 3+5=8
        first=second; //first->2  //first->3
        second=third;// second->3  // second->5
        
    }
}
