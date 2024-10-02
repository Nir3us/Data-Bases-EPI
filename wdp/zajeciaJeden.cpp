#include <iostream>

using namespace std;

int main() {

    int liczba=0;
    cout << "Norbert" << endl;
    cout << "imie" << endl;
    cout << "wiek" << endl;
    cout << "data" << endl;
    cout << "Podaj liczbe:";

    cin >> liczba;

    if (liczba % 2 == 0) {
        cout << "ta liczba jest parzysta" << endl;
    } else {
        cout << "ta liczba jest nieparzysta" << endl;
    }
    int a = 10;
    int b = 15;
    cout << "Pole prostokata o bokach 10 i 15 wynosi: " << a+b << endl;
    cout << "Obwod prostokata o bokach 10 i 15 wynosi: " << a*2+b*2 << endl;

    int liczbaDwa=0;
    int liczbaTrzy=0;

    cout << "Podaj pierwsza liczbe: ";
    cin >> liczbaDwa;
    cout << "Podaj druga liczbe: ";
    cin >> liczbaTrzy;
    cout << "Suma " << liczbaDwa + liczbaTrzy << " roznica " << liczbaDwa - liczbaTrzy << " iloczyn " << liczbaDwa * liczbaTrzy << " iloczyn " << liczbaDwa / liczbaTrzy << endl;
    int liczbaCztery=0;
    int liczbaFive=0;

    cout << "***********" << endl;
    cout << "*         *" << endl;
    cout << "*         * 5" << endl;
    cout << "*         *" << endl;
    cout << "********** 10" << endl;


    cout << "Podaj dlugosc pierwszego boku: ";
    cin >> liczbaCztery;
    cout << "Podaj dlugosc drugiego boku: ";
    cin >> liczbaFive;

    for(int pierwszaPetla = 1; pierwszaPetla <= liczbaCztery; pierwszaPetla++) {
            for(int i = 1; i <= liczbaFive; i++) {
                cout << "*";
                if (i == liczbaFive) {
                    cout << endl;
                }
            }
    }



    return 0;
}