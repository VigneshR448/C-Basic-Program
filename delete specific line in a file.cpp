#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    int d;
    cin>>d;  //i/p-> line no to delete the line 
   
    ifstream in("org.txt"); //creating i/p file
    ofstream out("new.txt"); // creating o/p file
   
    string line; // variable to pointing the ip no
   
    int line_no=1; // declaring line_no is 1
    while(getline(in,line)) // with sapce 
    {
        
        if(d!=line_no++) // (i/p != line_no )
        {
            cout<<line<<endl; // print the line_no data
        }
    }
    in.close();  // closing the i/p file
    out.close(); // closing ythe o/p file
    remove("org.txt"); // after remove the line , org file remove it
    rename("new.txt","org.txt"); // rename as a org file
}
