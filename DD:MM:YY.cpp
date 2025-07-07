#include<iostream>
using namespace std;
int main()
{
    string date;
    cin>>date;
    
    string day=date.substr(0,2);
    string month=date.substr(3,2);
    string year=date.substr(6,4);
    
    cout<<"DAY: "<<day<<endl;
    cout<<"MONTH: "<<month<<endl;
    cout<<"YEAR: "<<year<<endl;
}
