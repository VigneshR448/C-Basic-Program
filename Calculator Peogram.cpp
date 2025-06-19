#include <iostream>
using namespace std;
int main()
{
int Y;
int a,b; 
int op,Add,Sub,Mul,Div;
while(Y){
cout<<"1->Add"<<endl<<"2->Sub"<<endl<<"3->Mul"<<endl<<"4->Div"<<endl;
cin>>a>>b;
cin>>op;

switch (op)
{
    case  1: cout<<a+b;
    break;
    case  2: cout<<a-b;
    break;
    case  3: cout<<a*b;
    break;
    case  4: cout<<a/b;
    break;
    default : cout<<"Invalid operation..";
    
}

cout<<endl<<"Continue or Not [1/0]";
cin>>Y;

}
    return 0;
}
