#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  // Define two variables for the temperature Celcius and Fahrenheit

    double Celcius, Fahrenheit;

  // Input Statement for the variable Celcius

    cout << "Enter the temperature by Celcius\n";
    cin >> Celcius;

  // Devise your calculation logic to convert to Fahrenheit

    Fahrenheit = 9/5.0 * Celcius + 32;

  // Print out the Fahrenheit and Celcius according
  // to the output format

  cout << "Celcius" << Celcius << "is" << Fahrenheit << "Fahrenheit\n";









}