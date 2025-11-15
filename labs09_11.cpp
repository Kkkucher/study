#include <iostream>
#include <iomanip>
#include <limits>
/*
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;
int main()
{
	bool var = true;
	int a = 8;

	if (a<7)
	{
		cout << "var true";


	}
	else if  (a > 7 && a < 10) {

		cout << "var false";
	}
	else {
		cout << "soos";
	}


	return 0;
}*/

using namespace std;
int main()
{ 
	system("chcp 1251 > nul");
	/*
	char ch = 'a';

	switch (ch)
	{
	case 'a':
		cout << 'a';
		break;
	case 'b':
		cout << 'b';
	break;
	default:
		cout << 'c';



	}

	return 0;






	*/
	/*
	int a, b, c;
	cout << "a";
	cin >> a;
	cout << "b";
	cin >> b;
	cout << "c";
	cin >> c;

	if (a < b and b < c) {
		cout << a << ' ' << b << ' ' << c << endl;
	}
	else if (a < b and b > c and a < c) {
		cout << a << ' ' << c << ' ' << b << endl;
	}
	else if (a > b and b < c and a > c) {
		cout << b << ' ' << c << ' ' << a << endl;
	}
	else if (a > b and b < c and a < c) {
		cout << b << ' ' << a << ' ' << c << endl;
	}
	else if (a > b and b > c) {
		cout << c << ' ' << b << ' ' << a << endl;
	}
	else if  (a < b and b > c and a>c) {
		cout << c << ' ' << a << ' ' << b << endl;
	}
	*/
	/*
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	if (b > c)
	{
		int temp = b;
		b = c;
		c = temp;
	}
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	cout << a << ' ' << b << ' ' << c << endl;
	return 0;

	*/
	/*
	double a, b;
	char znak;
	cout << "a"<<endl;
	cin >> a;

	cout << "b"<<endl;
	cin >> b;
	cout << "znak"<<endl;
	cin >> znak;
	switch (znak) {
	case '+':
		cout << a + b;
		break;
	case '-':
		cout << a - b;
		break;
	case '*':
		cout << a * b;
		break;
	case '/':
		cout << a / b;
		break;
	}



	*/
	//посмотреть примеры на угадай число разбыть на декомпозицию (разбить на функцию)
	//будет смотреть репозиторий на гит лабе!!! создавать прямо сейчас и кидать туда свои проекты
	/*struct result {//vector //разобрать
		int guotient;
		int remainder;
		//поля структуры
	};
	Result result;
	*/
	/* int x, y;
	cout << "x";
	cin >> x;
	cout << "y";
	cin >> y;
	enum location { beach, ocean, field };
	location loc;
	if (y < -x + 3) {
		loc = ocean;
	}
	if (y > -x + 3) {
		loc = beach;
	}
	else {
		loc = field;
	}
	switch (loc) {
	case ocean:
		cout << "ocean";
		break;
	case beach:
		cout << "beach";
		break;

	default:
		cout << "field";



	}  

	return 0;
} */
	/*
	int a,sum;
	cin >> a;
	sum = 0;
	for (int i = 1; i <= a; i=i+1) {
		sum = sum + i;



	}
		//дз прога отвечает где мы и говорит куда нам ближе всего к выходу
		//посмотреть на сторону света если стороны нет обработать случай
	cout << sum ;*/
	/*
	int n, m;
	cin >> m;
	cin >> n;
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << i << "," << j<<" ";
		 }
		cout << endl;
	}
	*/
	/*
	int a, b;
	cin >>a;
	cin >>b;
	for (int i = 1; i <= a; ++i) {
		for (int j = 1; j <= b; ++j) {
			if ((j+i) % 2 == 0) { cout << "+"<<" "; }
			else { cout << "-"<<" "; }

		}
		cout << endl;
	}
	*/
/*
	int a, b, n;
	cin >> a; cin >> b;
	n= a + b;
	cout << n;
	cout << "more? yes/no";
	string que;
	cin >> que;
	
	while (que == "yes"){
 
		cin >> a; cin >> b;
	cout << a + b<<"more? yes/no";
	cin >> que;c 
    }

	*/

/*
int x, y, xme, yme;
cout << "введите размеры поля";
cin >> x >> y;
cout << "введите ваши координаты";
cin >> xme >> yme;
enum location { beach, ocean, field, me };
location loc;

for (int i = 1; i <= x; ++i) {
	for (int j = 1; j <= y; ++j) {

		if (xme == i && yme == j) {
			loc = me;
		}
		else if (1 <= i && i <= 5 && 1 <= j && j <= 5) {
			loc = ocean;
		}
		else if (6 <= i && i <= 9 && 6 <= j && j <= 9) {
			loc = beach;
		}
		else {
			loc = field;
		}
		switch (loc) {
		case ocean:
			cout << "o"<<" ";
			break;
		case beach:
			cout << "b"<<" ";
			break;
		case me:
			cout << "I" << " ";
			break;

		default:
			cout << "f"<<" ";
		}
		
	}       
	cout << endl;
}
*/




int x, y, xme, yme;
char name;
cout << "введите размеры поля";
cin >> x >> y;
cout << "введите ваши координаты";
cin >> xme >> yme;
enum location { beach, ocean, field, me };
location loc;
while (true) {
	cout << "type (s, n, w, e)";
	cin >> name;
	if (name == 'w') {
		--yme;
	}
	else if (name == 'e') {
		++yme;
	}
	else if (name == 's') {
		--xme;
	}
	else if (name == 'n') {
		++xme;
	}
	for (int i = 1; i <= x; ++i) {
		for (int j = 1; j <= y; ++j) {

			if (xme == i && yme == j) {
				loc = me;
			}
			else if (1 <= i && i <= 5 && 1 <= j && j <= 5) {
				loc = ocean;
			}
			else if (6 <= i && i <= 9 && 6 <= j && j <= 9) {
				loc = beach;
			}
			else {
				loc = field;
			}
			switch (loc) {
			case ocean:
				cout << "o" << " ";
				break;
			case beach:
				cout << "b" << " ";
				break;
			case me:
				cout << "I" << " ";
				break;

			default:
				cout << "f" << " ";
			}

		}
		cout << endl;
	}

}





}
// пройти карту и вывести где находимся по аналогии с матрицей




