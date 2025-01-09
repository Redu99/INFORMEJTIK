#include <iostream>
#include <vector>
using namespace std;
int main() {
   int wiersze, kolumny;
   cout << "Podaj liczbe wierszy: ";
   cin >> wiersze;
   cout << "Podaj liczbe kolumn: ";
   cin >> kolumny;
   int liczba_nieparzysta = 1;
   vector<vector<int>> macierz(wiersze, vector<int>(kolumny));
   for (int i = 0; i < wiersze; i++) {
       for (int j = 0; j < kolumny; j++) {
           macierz[i][j] = liczba_nieparzysta;
           liczba_nieparzysta += 2;
       }
   }
   cout << "\nWynikowa macierz:" << endl;
   for (int i = 0; i < wiersze; i++) {
       for (int j = 0; j < kolumny; j++) {
           cout << macierz[i][j] << " ";
       }
       cout << endl;
   }
   return 0;
}