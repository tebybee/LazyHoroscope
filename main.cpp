//Authors:Travis Bybee
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string first;
  string last;
  string nickname;
  int lucky;
  //get user input
  cout<<"What is your first name?\n";
  cin>> first;
  cout<<"What is your last name? \n";
  cin>> last;
  nickname.push_back(first[0]);
  nickname.push_back('.');
  nickname.push_back(last[0]);
  nickname.push_back('.');
  lucky = first.length();
  cout<< "Welcome, " <<nickname<< ", your lucky number is " <<lucky<<".\n";
  //tell fortune

  return 0;
}
