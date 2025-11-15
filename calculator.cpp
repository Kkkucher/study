#include <iostream>


using namespace std;

int main()
{
    double a, b, result;
    char sh;

    cout << "vvedi znak";
    cin >> sh;
    cout << "vvedi a";
    cin >> a;
    cout << "vvedi b";
    cin >> b;

    if (sh == '+') {
        result = a + b;
        cout << result << endl;
    }
    else if (sh == '-') {
        result = a - b;
        cout << result << endl;
    }
    else if (sh == '*') {
        result = a * b;
        cout << result << endl;
    }
    else if (sh == '/') {
        result = a / b;
        cout << result << endl;
    }


    return 0;
}