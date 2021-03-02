#include <iostream>
using namespace std;

// Write a program that displays the alphabets by using the ASCII code values from 65 to 90
// use the while loop, print 5 characters per line
int main()
{
  int i,j;
  i = 65;
  j = 0;
  while(i <= 90)
  {
      if(j == 5 || j == 10 || j == 15 || j == 20 || j == 25)
      {
          cout << '\n' ;
      }
      cout << static_cast<char>(i);
      i++;
      j++;
      


  }
  return 0;


}