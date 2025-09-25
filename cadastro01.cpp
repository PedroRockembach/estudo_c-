#include <iostream>
#include "parametros.h"

using namespace std;

int main()
{
	int idade[NUMERO];
	string nome[NUMERO];
	char sexo[NUMERO];
	
	int x = 0;
	
	for (x; x < NUMERO; x++)
	{
		cout << "Informe o nome da pessoa "  << x+1 <<": ";
		cin >> nome[x];
		
		cout << "Informe a idade "<< x <<" pessoa: ";
		cin >> idade[x];
		
		cout << "Informe o sexo " << x <<" pessoa(M/F): ";
		cin >> sexo[x];		
		
		cout << "Cadastrado!" << endl;
	}
	cout << endl;
	for (int i = 0; i < NUMERO;i++)
	{
		cout << "Pessoa: "<< i + 1 << endl
		 << "Idade: " << idade[i]<< endl
		 << "Nome: " << nome[i] << endl
		 << "Sexo: " << sexo[i]<< endl
		 <<endl
		 <<endl;
		
		
	}
}