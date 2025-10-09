

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Student {
    string name;
    int age;
    double grade;
};

int main() {
    Student students[] = {
        {"Иванов", 20, 4.5},
        {"Петров", 19, 3.8},
        {"Сидорова", 21, 4.9},
        {"Козлов", 20, 3.2}
    };

    int count = sizeof(students) / sizeof(students[0]);

    cout << "Таблица студентов:" << endl;
    cout << endl;

    // Заголовок таблицы
    cout << setw(15) << left << "Фамилия"
        << setw(10) << "Возраст"
        << setw(10) << "Оценка" << endl;

    // Разделитель
    cout << string(35, '-') << endl;

    // Данные
    for (int i = 0; i < count; i++) {
        cout << setw(15) << left << students[i].name
            << setw(10) << students[i].age
            << setw(10) << fixed << setprecision(1) << students[i].grade << endl;
    }

    return 0;
}