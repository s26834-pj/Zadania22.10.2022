#include <iostream>

using namespace std;

int main()
{
    int month;

    cout << "Podaj numer miesiaca z przedzialu od 1 do 12: ";
    cin >> month;
    cout << endl;

    switch (month)
    {
    case 1:
        cout << "Styczen";
        break;
    case 2:
        cout << "Luty";
        break;
    case 3:
        cout << "Marzec";
        break;
    case 4:
        cout << "Kwiecien";
        break;
    case 5:
        cout << "Maj";
        break;
    case 6:
        cout << "Czewiec";
        break;
    case 7:
        cout << "Lipiec";
        break;
    case 8:
        cout << "Sierpien";
        break;
    case 9:
        cout << "Wrzesien";
        break;
    case 10:
        cout << "Pazdziernik";
        break;
    case 11:
        cout << "Listopad";
        break;
    case 12:
        cout << "Grudzien";
        break;
    default:
        cout << "Wybrales liczbe spoza przedzialu.";
    }
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        cout << " ma 31 dni, ";
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        cout << " ma 30 dni, ";
    }
    else {
        cout << " ma 28 dni, ";
    }
    
    if (month >= 4 && month <= 9){
        cout << "pogoda sloneczna." << endl;
    }
    
    else {
        cout << "pogoda pochmurna." << endl;
    }
        return 0;
}