#include <iostream>
#include <string>   
#include <limits>   
#include <cctype>   
#include "parametros.h"

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
void limpa_buffer()
{
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
void mostrar(pessoa *cad)
{
	cout << endl;
		for (int i = 0; i < NUMERO;i++)
		{
				cout
				 << "Pessoa: "<< i + 1 << endl
				 << "Nome: " << cad[i].nome << endl
				 << "Sexo: " << cad[i].sexo;
			
			if (cad[i].sexo == 'f')
			{
				cout 
				 << "Não é elegante perguntar a idade de uma dama.";
			}
			else
			{
				cout
				 << "Idade: " << cad[i].idade<< endl;
			}
		}
}

int main()
{
	
	pessoa cadastro[NUMERO];
	
	for (int x = 0; x < NUMERO; x++)
	{
		cout << "Informe o nome da pessoa "  << x+1 <<":";
		getline(cin,cadastro[x].nome);
		
		while(!valid_name(cadastro[x].nome))
		{
			cout << "Informe um nome valido! Usando caracteres e espaços apenas." << endl << ">";
			getline(cin, cadastro[x].nome);
		}
		
		cout << "Informe a idade da pessoa "<< x + 1 <<" :";
		while(!(cin >> cadastro[x].idade) || cadastro[x].idade < 0)
		{
			cout << "ERRO! Idade invalida, insira somente numeros positivos." << endl << ">";
			
			cin.clear();
			limpa_buffer();
		}
		
		
		cout << "Informe o sexo da pessoa "<< x + 1 <<":";
		while (!(cin >> cadastro[x].sexo) || (tolower(cadastro[x].sexo) != 'm') && tolower(cadastro[x].sexo) != 'f')
		{
			cout << "ERRO! Informe seu sexo com M ou F." << endl << ">";	
			
			cin.clear();
			limpa_buffer();
		}
				
		
		cout << "Cadastrado!" << endl;
		
		limpa_buffer();
	}
	cout << endl;
	mostrar(cadastro);
}