//Start
//  Read ParcelWeight 
//  SET basefee = 8.00 per parcel
//  if ParcelWeight <= 2.0 THEN
//		surcharge = 0.00
//  else
// 		surcharge = 5.00
//		display "Heavy parcel: RM5.00 surcharge added."
//  ENDIF
//  compute TotalFee = basefee + surcharge
//  display "Total Fee: RM" + TotalFee
//Stop

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double ParcelWeight, basefee, surcharge, TotalFee;
	cout << "Enter Parcel Weight (kg): ";
	cin >> ParcelWeight;
	basefee = 8.00;
	if (ParcelWeight <= 2.0)
	{
		surcharge = 0.00;
	}
	else
	{
		surcharge = 5.00;
		cout << "Heavy parcel: RM5.00 surcharge added." << endl;
	}
	TotalFee = basefee + surcharge;
	cout << fixed << setprecision(2);
	cout << "Total Fee: RM" << TotalFee << endl;
	return 0;
}