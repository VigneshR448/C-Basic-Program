#include<iostream>
using namespace std;
class about_player{
  public:
  string name;
  string country;
  string skill;
  
  void getinput(){
    getline (cin,name);
    getline(cin,country);
    getline(cin,skill);
  }
  void display(){
    cout<<"Player Details:"<<endl;
     cout<<"Player Name: "<<name<<endl;
     cout<<"Country Name: "<<country<<endl;
     cout<<"Skill: "<<skill<<endl;
  }
};
int main()
{
  about_player player;
  player.getinput();
  player.display();
  return 0;
}
