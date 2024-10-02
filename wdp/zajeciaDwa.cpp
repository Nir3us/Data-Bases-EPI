#include <iostream>
#include <ctime>
#include <string>


using namespace std;

int main() {
    string password = "Student321";
    cout << "Podaj hasło do sytemu: ";
    string password_from_user = "";
    cin >> password_from_user;
    if(password_from_user == password) {
        cout << "witamy w systemie szefie!!!" << endl;
    } else {
        cout << "bledne haslo!";
    }



    return 0;
}