#include <iostream>
using namespace std;
int main() {
    int liczby[5];  
    int suma = 0;   
    double srednia; 

    cout << "Podaj 5 liczb calkowitych:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Liczba " << i + 1 << ": ";
        cin >> liczby[i];
    }

    for (int i = 0; i < 5; i++) {
        suma += liczby[i];
    }
    srednia = suma / 5.0; 
    cout << "Srednia liczb wynosi: " << srednia << endl;
    return 0;
}
