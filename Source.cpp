#include <iostream>
#include <cmath>

using namespace std;

int main()// program for converting temperature from degrees Celsius to Fahrenheit
{
	double a, b, d,e;
	char choise;
	cout << "Choose 'c' for converting from celsius to fahrenheit and 'f' for converting from fahrenheit to celsius " << endl;
	cin >> choise;
	cout << endl;
	if (choise == 'c')
	{
		cout << "enter Celsius dagree --- ";
		cin >> a;
		b = ((a * 9) / 5) + 32;  //(a − 32) × 5 / 9 = 0 °C // 20 * 9 / 5 + 32 = 68°F
		cout << "the Fahrenheit is equal to --- " << b << endl;
	}
	else if (choise == 'f')
	{
		cout << "enter Fahrenheit degree --- ";
		cin >> d;
		e = ((d - 32) * 5) / 9;
		cout << "the Celsius degree is equal to --- " << e << endl;
	}


    return 0;
}