#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Podaj liczbe N: ";
    cin >> N;

    cout << "Liczby nieparzyste od 1 do " << N << ":\n";
    for (int i = 1; i <= N; i += 2) {\
        cout << i << endl;
    }

    return 0;
}
