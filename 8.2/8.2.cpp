#include <iostream>
#include <time.h>
#include <clocale>

using namespace std;

int main()
{
    setlocale(0, "");
    int a, b;
    int mas[10];
    srand((unsigned)time(0));
    for (int i = 0; i < 10; i++)
    {
        mas[i] = rand() % 10;
        cout << mas[i] << " ";
    }
    cout << "\n";
    cout << "Введите интервал a ";
    cin >> a;
    cout << "Введите интервал b ";
    cin >> b;
    if (a < b)
        swap(b, a);
    cout << "Не попадают под интервал элементы: ";
    for (int i = 0; i < 10; i++)
    {
        if ((mas[i] > b) && (mas[i] < a))
        {
            cout << mas[i] << " ";
        }
    }
    system("pause");
}

