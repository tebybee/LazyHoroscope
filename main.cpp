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

  //get user input
  cout<<"What is your first name?\n";
  cin>> first;
  cout<<"What is your last name? \n";
  cin>> last;
  nickname.push_back(first[0]);
  nickname.push_back('.');
  nickname.push_back(last[0]);
  nickname.push_back('.');
  cout<< "Welcome, " <<nickname<< ", here is your fortune...\n";
  //tell fortune

  return 0;
}
