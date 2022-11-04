#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Podaj liczbe a: ";
    cin >> a;

    cout << "Podaj liczbe b: ";
    cin >> b;
    cout << endl;

    cout << "Wiersz o dlugosci a: ";
    cout << endl;

    for (int i = 1; i <= a; i++)
        cout << "*";
    
    cout << endl << endl << endl;

    cout << "kolumna o dlugosci b: ";
    cout << endl;

    for (int j = 1; j <= b; j++)
        cout << "*" << endl;

    cout << endl << endl << endl;
   
    cout << "Prostokat o wymiarach 'a' na 'b': " << endl;

    for (int k = 1; k <= b; k++) {
        for (int l = 1; l <= a; l++)
            
                cout << "*";
          
        cout << endl;
    }
    
    cout << endl << endl << endl;

    cout << "Obwod prostokata o wymiarach 'a' na 'b': " << endl;

    for (int m = 1; m <= b; m++) {
        for (int n = 1; n <= a; n++)
            if (m == 1 || m == b || n == 1 || n == a)
                cout << "*";
            else cout << " ";
        cout << endl;
    }

    cout << endl << endl << endl;

    cout << "Trojkat rownoramienny, o ramieniu 'a', z katem prostym w lewym dolnym rogu: " << endl;
    

    for (int o = 1; o <= a; o++)
    {
        for (int p = 1; p <= o; p++)
            cout << "*";

        cout << endl;
    }
    cout << endl << endl << endl;

    cout << "Trojkat rownoramienny, o ramieniu 'a', z katem prostym w prawym gornym rogu: " << endl;

    for (int q = a; q > 0; q--)
    {
        for (int r = a; r > 0; r--)
            if (r > q)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        cout << endl;
    }
    cout << endl;

    return 0;


}