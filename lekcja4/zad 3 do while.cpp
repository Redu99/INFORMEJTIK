#include <iostream>
using namespace std;

int main() {
    int liczba;
    char wybor;
     do {
     	cout << "Podaj liczbę: ";
        cin >> liczba;
cout << "Wprowadzona liczba: " << liczba << endl;
cout << "Czy chcesz wprowadzić kolejną liczbę? (t/n): ";
        cin >> wybor;
} while (wybor == 't' || wybor == 'T');
cout << "Zakończono wprowadzanie liczb." << endl;

    return 0;
}