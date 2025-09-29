#include <iostream>
#include "parametros.h"

using namespace std;

struct pessoa
{
	
		int idade;
		string nome;
		char sexo;
};
	void mostrar(pessoa *cad)
{
	cout << endl;
		for (int i = 0; i < NUMERO;i++)
		{
			if (cad[i].sexo == 'f' || cad[i].sexo == 'F')
			{
				cout << "Pessoa: "<< i + 1 << endl
				 << "Nome: " << cad[i].nome << endl
				 << "Sexo: " << cad[i].sexo<< endl
				 <<endl
				 <<endl;
			}
			else
			{
				cout << "Pessoa: "<< i + 1 << endl
				 << "Idade: " << cad[i].idade<< endl
				 << "Nome: " << cad[i].nome << endl
				 << "Sexo: " << cad[i].sexo<< endl
				 <<endl
				 <<endl;
			}
		}
		
}

int main()
{

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
	mostrar(cadastro);
}