// lab6.2(2).cpp
//Опрацювання одновимірних масивів ітераційними та рекурсивними способами
//Сацик Вікторії
//20 варіант

#include <iostream>
#include <time.h>
using namespace std;

void main()
{
    const int str = 5;
    const int stb = 10;
    srand(time(0));
    setlocale(LC_ALL, "Ukrainian");
    srand((unsigned)time(NULL));// ініціалізація генератора випадкових чисел
    srand(1);//для перевірки правильності способів

    int ar[str][stb];
    cout << "рекурсивний спосіб" << endl;
    cout << endl;


    //заповнюємо масив
    for (int i = 0; i < str; i++)
    {
        for (int j = 0; j < stb; j++)
        {
            ar[i][j] = rand() % 50;
            cout << ar[i][j] << "\t";
        }
        cout << endl << endl;
    }

    //обчислення суми
    int sum = 0;
    for (int i = 0; i < str; i++)
    {
        for (int j = 0; j < stb; j++)
        {
            sum += ar[i][j];
        }
    }
    cout << "Сума значень всіх елементів масиву= " << sum << "\n\n";

    //обчислення середнього значення
    int ave;
    ave = sum / (str * stb);
    cout << "Середнє значення всіх елементів масиву = " << ave << "\n\n";
}
