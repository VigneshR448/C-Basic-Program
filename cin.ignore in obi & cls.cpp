#include<iostream>
using namespace std;
class Player{
  public:
  long Over,Ball,Run;
  string Batsmen,Bowler,Non_Striker;
  
  void getinput(){
   cin>>Over>>Ball>>Run;
    getline(cin,Batsmen);
    getline(cin,Bowler);
    getline(cin,Non_Striker);
  }
  
  void display()
  {
    cout<<"Delivery Details:"<<endl;
    cout<<"Over: "<<Over<<endl;
    cout<<"Ball: "<<Ball<<endl;
    cout<<"Runs: "<<Run<<endl;
    cout<<"Batsman: "<<Batsmen<<endl;
    cout<<"Bowler: "<<Bowler<<endl;
    cout<<"non-Striker: "<<Non_Striker;
  }
};
int main()
{
  Player p;
  p.getinput();
  p.display();
  return 0;
}
