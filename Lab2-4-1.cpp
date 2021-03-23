#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* use filestream for writing
 Make a program that writes the given number N of integers to a file
 The integers that we write to a file will be determined with a random number generation
 The number of integers N is determined by the user input
 The generated N random numbers are stored into a file.*/

int main()
{

  int random;
  int N;
  
  ofstream    ofs;

  ofs.open("random.text");

  cout << "Enter the number of random numbers to be added \n";
  cin >> N;

  for (int i = 1; i <= N; i++)
  {
        
        ofs << 1 + rand() % 100; 
        cout << random;
        


  }

  
  




}