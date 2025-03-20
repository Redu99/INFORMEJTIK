#include <iostream>
using namespace std;

int main() {
char tekst[21];
cout << "Podaj tekst (max 20 znakow): ";
cin.getline(tekst, 21);

for (int i = 0; i <21; i+=1){
if (tekst[i] == 'a'){
tekst[i] = 'O';

} 


	

}

cout <<tekst;




}