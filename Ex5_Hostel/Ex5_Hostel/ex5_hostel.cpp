//Start 
// Read hour
// if (hour >= 23 OR hour <6) then
//  Display "Late entry : sign the logbook." + "Show your matric card."
// else
//  Display "Welcome back."
// end if
// display "Good Night."
//Stop

#include <iostream>
using namespace std;

int main()
{
	int Hour;
	cout << "Enter hour (0-23): ";
	cin >> Hour;

	if (Hour >= 23 || Hour < 6)
	{
		cout << "Late entry: sign the logbook. Show your matric card." << endl;
	}
	else
	{
		cout << "Welcome back." << endl;
	}
	cout << "Good Night." << endl;
	return 0;
}
