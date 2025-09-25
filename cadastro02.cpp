#include <iostream>
#include "parametros.h"

using namespace std;

int main()
{
	struct pessoa
	{
	
		int idade;
		string nome;
		char sexo;
	};
	int x = 0;
	
	pessoa cadastro[NUMERO];
	
	for (x; x < NUMERO; x++)
	{
		cout << "Informe o nome da pessoa "  << x+1 <<": ";
		cin >> cadastro[x].nome;
		
		cout << "Informe a idade "<< x <<" pessoa: ";
		cin >> cadastro[x].idade;
		
		cout << "Informe o sexo " << x <<" pessoa(M/F): ";
		cin >> cadastro[x].sexo;		
		
		cout << "Cadastrado!" << endl;
	}
	cout << endl;
	for (int i = 0; i < NUMERO;i++)
	{
		cout << "Pessoa: "<< i + 1 << endl
		 << "Idade: " << cadastro[i].idade<< endl
		 << "Nome: " << cadastro[i].nome << endl
		 << "Sexo: " << cadastro[i].sexo<< endl
		 <<endl
		 <<endl;
		
		
	}
}