#include <iostream>
using namespace std;

/*
  Make a program that finds the prime numbers in the given range
  Find the prime numbers in the list 1,100
  Input two positive integers
  output the list of prime number list in the given range 
  Program logic
  Input statement for the user inputs
  make the input validation statement for the range
  make the for-loop for the iteration with the user's range
  make the for-loop for checking whether the number is a prime number or not
  print out the number if it is prime*/
int main()
{
  int rangeOne, rangeTwo;
  int i,j;
  cout << "Enter the range of numbers to be checked for prime numbers" << endl;
  cin >> rangeOne >> rangeTwo;

  for(i = 2;i < rangeTwo; i++)
  {
     if(rangeOne % i == 0)
     {
        cout << rangeOne ;
        
     }
    

  }



  return 0;



}