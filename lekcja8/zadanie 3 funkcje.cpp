#include <iostream>
using namespace std;
void tekst(char text[], int size) {
cout << "Wprowadz ciag znakow: ";
cin.getline(text, size);
}
void OdwroconyString(char text[]) {
int start = 0;
int end = 0;
while (text[end] != '\0') {
end++;
}
end--;
while (start < end) {
swap(text[start], text[end]);
start++;
end--;
}
}
void Wynik(const char text[]) {
cout << "Odwrocony ciag znakow: " << text << endl;
}
int main() {
const int MAX_SIZE = 1000;
char userText[MAX_SIZE];
    
tekst(userText, MAX_SIZE);
OdwroconyString(userText);
Wynik(userText);

return 0;
}