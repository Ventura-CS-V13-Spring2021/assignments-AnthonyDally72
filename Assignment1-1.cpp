#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
      const double ClassA = 15.00;
      const double ClassB = 12.00;
      const double ClassC = 9.00;

      double TotalA, TotalB, TotalC;
      int SeatA, SeatB, SeatC, NumofTickets;

      cout << "How many tickets were sold for Class A Seats" << endl;
      cin >> SeatA;

      cout << "How many tickets were sold for Class B Seats" << endl;
      cin >> SeatB;
      
      cout << "How many tickets were sold for Class C Seats" << endl;
      cin >> SeatC;
      
      TotalA = ClassA * SeatA;
      TotalB = ClassB * SeatB;
      TotalC = ClassC * SeatC;
      double Total_Amount = TotalA + TotalB + TotalC;

      cout << "Total amount made"<< fixed << showpoint << setprecision(2) << Total_Amount << "For all tickets sold." << endl;

}