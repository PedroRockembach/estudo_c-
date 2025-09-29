#include <iostream>
#include "uteis.h"

int main()
{
	string frase_inicial = "";
	cout << "Digite uma frase: ";
	cin >> frase_inicial;
	
	cout << frase_inicial << endl;
	
	string frase_baixa = to_lower(frase_inicial);
	string frase_alta = to_upper(frase_inicial);
	string limpa = strip(frase_inicial);
	
	cout << limpa;
}