#include <iostream>
using namespace std;

int main()
{
  int input_One, input_Two;
  cout << "Enter two values\n";
  cin >> input_One >> input_Two;

  // Make a nested if statement

  /*if(input_One != input_Two)
  {
      if(input_One > input_Two)
      {
          cout << "the first number is greater";
      }
      else
      {
          cout << "the second number is greater";
      } 

  }
  else
  {
      cout << "Please try again ";
  }
  */
  
  // Make the if/else statement and logical operator &&
  if(input_One > input_Two && input_One != input_Two)
  { 
    cout << "The first number is greater";

  }
  else if(input_One == input_Two)
  {
    cout << "The numbers match";

  }
  else
  {
    cout << "the second number is greater";
  }

  return 0;

}
