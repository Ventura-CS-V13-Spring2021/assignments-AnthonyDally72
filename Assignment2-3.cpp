#include <iostream>
using namespace std;
int main()

// Rewrite the following program
// Use a switch statement instead of the if/else if statement
{
  char selection;
  cout << "Enter your choice among A, B, or C\n";
  cin >> selection;

  switch(selection)
  {
    case 'A':
    case 'a':
        cout << "your choice was A\n" ;
        break;    
    case 'B':
    case 'b':
        cout << "your choice was B\n" ;
        break;    
    case 'C':
    case 'c':
        cout << "your choice was C\n" ;
        break;   
    default:
        cout << "Invalid choice entered "; 

  }
    return 0;

  //if (selection == 'A' || selection == 'a')
    //  cout << "Your choice is A\n";
  //else if (selection == 'B' || selection == 'b')
     // cout << "Your choice is B\n";
  //else if (selection == 'C' || selection == 'c')
     // cout << "Your choice is C\n";
  //else
      //cout << "Choice is incorrect\n";






}