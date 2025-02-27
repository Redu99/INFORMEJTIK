#include <iostream>
using namespace std;
int main() {
    int liczby[5]; 
    int najmniejsza; 
    cout << "Wprowadź 5 liczb całkowitych: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Liczba " << i + 1 << ": ";
        cin >> liczby[i];
    }

    najmniejsza = liczby[0];


    for (int i = 1; i < 5; i++) {
        if (liczby[i] < najmniejsza) {
            najmniejsza = liczby[i];
        }
    }

    cout << "Najmniejsza liczba w tablicy to: " << najmniejsza << endl;

    return 0;
}
