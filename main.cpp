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
  cout<< "Welcome, " <<nickname<< ", here is your fortune...\n";
  cout<< "your lucky number is " <<lucky<<"\n";
  char fort = first[0];
  int len = last.length();
  char love = last[len-1];
  if(fort == 'a'||fort == 'e'||fort == 'i'||fort == 'o'||fort == 'u'||fort == 'A'||fort == 'E'||fort == 'I'||fort == 'O'||fort == 'U')
  {
    cout<<"you are destined to be famous!\n";
  }
  else
  {
    cout<<"you should keep a low profile.\n";
  }
  if(love == 'a'||love == 'e'||love == 'i'||love == 'o'||love =='u')
  {
    cout<<"you have already met your true love!\n";
  }
  cout<<"have a good day!\n";
  

  return 0;
}
