//Author:
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
int user1;
int user2;
int biggest;

  cout<<"Please enter a whole number:\n";
  cin>>user1;
  cout<<"Please enter another whole number:\n";
  cin>>user2;
  cout<<"Of those two numbers, the biggest is: ";
  if(user1>=user2){
  biggest=user1;
  }
  else
  {
  biggest=user2;
  }
  cout<<biggest<<endl<<"Thank you for playing.\n";

  return 0;
}
