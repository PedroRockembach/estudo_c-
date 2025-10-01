#include <iostream>
#include "parametros.h"
#include <limits>

using namespace std;

struct pessoa
{
		int idade;
		string nome;
		char sexo;
};
bool valid_name(const string&nome)
{
	if (nome.empty())
	{
		return false;
	}
	for (char c : nome)
	{
		if (!isalpha(c) && !isspace(c))
		{
			return false;
		}
	}
	return true;
}
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
	
	pessoa cadastro[NUMERO];
	
	for (int x = 0; x < NUMERO; x++)
	{
		cout << "Informe o nome da pessoa "  << x+1 <<": ";
		getline(cin,cadastro[x].nome);
		
		while(!valid_name(cadastro[x].nome))
		{
			cout << "Informe um nome valido! Usando caracteres e espaços apenas.";
			getline(cin, cadastro[x].nome);
		}
		
		cout << "Informe a idade "<< x <<" pessoa: ";
		while(!(cin >> cadastro[x].idade) || cadastro[x].idade < 0)
		{
			cout << "ERRO! Idade invalida, insira somente numeros positivos " << endl << ">";
			
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		
		cout << "Informe o sexo da  "<< x <<" pessoa: ";
		cin >> cadastro[x].sexo;		
		
		cout << "Cadastrado!" << endl;
	}
	cout << endl;
	mostrar(cadastro);
}