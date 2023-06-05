#include <iostream>
#include <cmath> 

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    double x, y;
    while (true) {
        cout << "Введите координату точки x: ";
        cin >> x;
        if (cin.fail() || cin.get() != '\n') 
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ошибка: введено некорректное значение! Повторите ввод.\n";
        }
        else
           break;
    }

    while (true) 
    {
        cout << "Введите координату точки y: ";
        cin >> y;
        if (cin.fail() || cin.get() != '\n') 
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ошибка: введено некорректное значение! Повторите ввод.\n";
        }
        else
           break;
    }
    if ((x >= 0 && x <= 1 && y >= 0 && y <= 1 && x >= abs(y)) ||
        (x >= 0 && x <= 1 && y <= 0 && y >= (-1) && x >= abs(y)) ||
        (x <= 0 && x >= (-1) && y >= 0 && y <= 1 && abs(x) >= abs(y)) ||
        (x <= 0 && x >= (-1) && y <= 0 && y >= (-1) && abs(x) >= abs(y)))

        cout << "Точка (" << x << ", " << y << ") попадает в заштрихованную область" << endl;
    else
        cout << "Точка (" << x << ", " << y << ") НЕ попадает в заштрихованную область" << endl;

    return 0;
}
