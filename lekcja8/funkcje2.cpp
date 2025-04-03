#include <iostream>
using namespace std;

int main() {
double liczba1, liczba2, wynik;
int wybor;
while (true) {
cout << "Wybierz funkcję matematyczną:" << endl;
cout << "1. Suma" << endl;
cout << "2. Różnica" << endl;
cout << "3. Iloczyn" << endl;
cout << "4. Iloraz" << endl;
cout << "0. Zakończ program" << endl;
cout << "Twój wybór: ";
cin >> wybor; 
if (wybor == 0) {
cout << "Koniec programu!" << endl;
break;  
}
cout << "Podaj pierwsza liczbę: ";
cin >> liczba1;
cout << "Podaj drugą liczbę: ";
cin >> liczba2;
switch (wybor) {
case 1: 
wynik = liczba1 + liczba2;
cout << "Wynik sumy: " << wynik << endl;
break;
case 2: 
wynik = liczba1 - liczba2;
cout << "Wynik różnicy: " << wynik << endl;
break;
case 3: 
wynik = liczba1 * liczba2;
cout << "Wynik iloczynu: " << wynik << endl;
break;
case 4: 
if (liczba2 != 0) {
wynik = liczba1 / liczba2;
cout << "Wynik ilorazu: " << wynik << endl;
} else {
cout << "Błąd: Nie można dzielić przez 0!" << endl;
}
break;
default:
cout << "Nieprawidłowy wybór! Spróbuj ponownie." << endl;
break;
}
}
return 0;
}



