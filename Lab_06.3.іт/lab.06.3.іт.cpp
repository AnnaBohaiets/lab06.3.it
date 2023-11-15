#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int* Create(int* a, const int size, const int Low, const int High)
{
    a = new int[size];

    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
    return a;
}

void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i] << ", ";
    cout << endl;
}

int Sum(int* a, const int size)
{
    int S = 0;
    for (int i = 0; i < size; i++)
        if (a[i] % 2 == 0)
            S += a[i];
    return S;
}

int main()
{
    srand((unsigned)time(NULL));
    int n;
    cin >> n;
    const int Low = -100;
    const int High = 100;

    int* a = Create(0, n, Low, High);

    Print(a, n);
    int count = Sum(a, n);
    cout << "Sum of even elements  is " << count << endl;
    delete[] a; // Звільнення пам'яті

    return 0;
}
