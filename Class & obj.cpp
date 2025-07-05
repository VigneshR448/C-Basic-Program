#include<iostream>
using namespace std;
class game{
  public:
  string name;
  string city;
  
  void getinput(){
    getline(cin,name);
    getline(cin,city);
  }
  
  void display(){
    cout<<"Venue Details:"<<endl;
    cout<<"Venue Name: "<<name<<endl;
    cout<<"City Name: "<<city;
  }
};
int main()
{
  game G;
  G.getinput();
  G.display();
}
