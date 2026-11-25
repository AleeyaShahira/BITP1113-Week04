#include <iostream>
using namespace std;
int main() 
{ 
    int battery;
	bool charging;
	cout << "Enter battery percentage (without percent sign): ";
	cin >> battery;
	cout << "Phone is charging (1 = yes, 0 = no) ?";
	cin >> charging;

	cout << (battery < 20) << endl;
	cout << (battery < 20 && !charging) << endl;
	cout << (battery == 100 || charging) << endl;
	cout << (battery >= 0 && battery <= 100) << endl;
	cout << (0 <= battery && battery <= 100) << endl;
	return 0;
}