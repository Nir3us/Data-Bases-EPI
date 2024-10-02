#include <iostream>

using namespace std;

int main(){

    int liczba=0;
    cout << "Norbert" << endl;
    cout << "imie" << endl;
    cout << "wiek" << endl;
    cout << "data" << endl;
    cout << "Podaj liczbę:";
    
    cin >> liczba;
    if (liczba %2 = 0) {
        cout << "ta liczba jest parzysta" << endl;

    } else {
        cout << "ta liczba jest nieparzysta" << endl;
    }
    int a = 10;
    int b = 15;
    cout << "Pole prostokąta o bokach 10 i 15 wynosi: " << a+b << endl;
    cout << "Obwód prostokąta o bokach 10 i 15 wynosi: " << a*2+b*2 << endl;


    return 0;
}