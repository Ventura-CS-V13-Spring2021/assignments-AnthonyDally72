#include <iostream>
using namespace std;

//Make a program that checks whether there are duplicated numbers within the inputs
// Read from the user three inputs(integer value)

int main()
{
  int num1, num2, num3;
  cout << "Enter three different numbers : ";
  cin >> num1 >> num2 >> num3 ;

  if(num1 != num2 && num2 != num3 && num3 != num1)
  {
      cout << "All numbers are distinct";
  }
  else if(num1 == num2 || num2 == num3)
  {
      cout << "There are two duplicated numbers"; 
  }
  else  
  {
     cout << "All numbers are the Same";
  }
  return 0;







}