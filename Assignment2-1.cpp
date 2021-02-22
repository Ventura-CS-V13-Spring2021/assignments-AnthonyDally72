#include <iostream>
using namespace std;

int main()

{
  // Find the greatest value among the user inputs
  
   
    int num1, num2, num3;
    cout << "Enter three integer values : " ;
    cin >> num1 >> num2 >> num3 ;

 
    if( num1 > num2 && num1 > num3)
          {
              cout << " num1 is the greatest value : " << num1 << endl;
          }
    else if (num2 > num1 && num2 > num3)
          {
            cout << " num2 is the greatest value : " << num2 << endl;
          }
    else
          {
            cout << "num3 is the greatest value : " << num3 << endl;
          }
      
     return 0;



}