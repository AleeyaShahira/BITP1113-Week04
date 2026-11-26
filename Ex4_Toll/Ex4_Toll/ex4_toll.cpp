//Start
// Read Balance
// SET TollAmount = 5.30
// if Balance >= TollAmount then
//  FinalBalance = Balance - TollAmount
//  Display "Gate opened.New Balance : RM " + FinalBalance
// else
//  Display "Insufficient Balance. Please reload."
// end if
//Stop
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double Balance, TollAmount = 5.30, FinalBalance;
	cout << fixed << setprecision(2) << "Enter your balance: RM ";
	cin >> Balance;

	if (Balance >= TollAmount)
	{
		FinalBalance = Balance - TollAmount;
		cout << "Gate opened. Final Balance : RM " << fixed << setprecision(2) << FinalBalance;
	}
	else
	{
		cout << "Insufficient Balance. Please reload.";
	}
	return 0;
}
