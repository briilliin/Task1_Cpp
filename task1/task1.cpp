#include <iostream>

using namespace std;

void reverse_rows(int** arr, int c)
{
    for (int i = 0; i < c-1; i+=2)
    {
        swap(arr[i], arr[i + 1]);
        cout << "\n";
    }
}

void show(int** arr, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << "\t";

        }
        cout << "\n";
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int r, c;
    cout << "Введите количество строк: ";
    cin >> r;
    cout << "Введите количество столбцов: ";
    cin >> c;

    int** arr = new int* [r];
    for (int i = 0; i < r; i++) 
    {
        arr[i] = new int[c];
    }

    ///////////////////////////////////////////////

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = rand() % 10;
            cout << arr[i][j] << "\t";

        }
        cout << "\n";
    }

    reverse_rows(arr, c);
    show(arr, r, c);

    //////////////////////////////////////////////

    for (int i = 0; i < r; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
}


