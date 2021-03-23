#include <iostream>
#include <fstream>
using namespace std;

/*
Make a program that writes the given number N of integers to a file
The integers that we write to a file will be determined with a random number generation
The number of integers N is determined by the user input
the generated N random numbers are stored into a file

*/

int main()
{


  ofstream ofs; // if writing, use ofstream

  ofs.open("lab2-2-5.cpp");
  ofs << "Hello File\n";

  ofs.close();



}

// Header file
// Declaration object for File I/O
// Open a file
// Read or write
// Close a file

// fstream// ifstream ofstream