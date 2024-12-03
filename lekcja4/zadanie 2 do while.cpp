#include <iostream>
using namespace std;
int main() {
    int N, suma = 0, i = 1;	
cout << "Podaj liczbę całkowitą dodatnią N: ";
    cin >> N;
if (N <= 0) {
        cout << "Podana liczba nie jest liczbą dodatnią!" << endl;
        return 1;
    }
    while (i <= N) {
        suma += i;
        i++;
}
 cout << "Suma liczb naturalnych od 1 do " << N << " wynosi: " << suma << endl;
 return 0;
	
}