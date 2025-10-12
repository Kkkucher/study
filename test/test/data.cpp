#include <iostream>

using namespace std;

int main()
{
	double a, b, c;
	
	cout << "введите chislo";
	cin >> a;
	cout << "введите mes";
	cin >> b;
	cout << "введите год";
	cin >> c;
    
	if (a < 30) {
		a = a + 1;
		cout << a << '.' << b << '.' << c << endl;
	}
	else if (a = 30 && b < 12) {
		b = b + 1;
		a = 1;
		cout << a << '.' << b << '.' << c << endl;
	}
	else if (a == 30 and b > 11) {
		b = 1;
		a = 1;
		c = c + 1;
		cout << a << '.' << b << '.' << c << endl;
	}
	else if (a == 28 and b == 2) {
		b = 3;
		a = 1;
		cout << a << '.' << b << '.' << c << endl;
	}
			

}