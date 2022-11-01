#include <iostream>

using namespace std;

int main()
{
    int n, wynik = 0, suma;

    cout << "Wprowadz n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        suma = 0;
        for (int j = 1; j <= i; j++)
        {
            wynik += j;
            suma += j;
            cout << j;
            if (j < i)
            {
                cout << "+";
            }
        }
        cout << " = " << suma << endl;
    }
    cout << "Suma szeregu wynosi: " << wynik << endl;

    return 0;
}