#include <iostream>
using namespace std;

int main() {
    int N, liczbaParzystych = 0, i = 1;
 cout << "Podaj liczbê ca³kowit¹ dodatni¹ N: ";
    cin >> N;
     do {
        if (i % 2 == 0) {  
            liczbaParzystych++;
    }
    i++;
    } while (i <= N);
     cout << "Liczba liczb parzystych w zakresie od 1 do " << N << " wynosi: " << liczbaParzystych << endl;
     return 0;
}