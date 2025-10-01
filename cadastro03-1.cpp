#include <iostream>
#include <string>   
#include <limits>   
#include <cctype>   
#include "parametros.h"
#include "uteis.h"

using namespace std;

struct pessoa
{
		int idade;
		string nome;
		char sexo;
};

bool valid_name(const string&nome)
{
	string nome_limpo = strip(nome);
	if (nome_limpo.empty())
	{
		return false;
	}
	for (char c : nome_limpo)
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
				<< endl << "Idade: " << cad[i].idade<< endl;
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
		/////////////////////////////////
		cout << "Informe a idade da pessoa "<< x + 1 <<" :";
		while(!(cin >> cadastro[x].idade) || cadastro[x].idade < 0)
		{
			cout << "ERRO! Idade invalida, insira somente numeros positivos." << endl << ">";
			
			cin.clear();
			limpa_buffer();
		}
		//////////////////////////////////////
		cout << "Informe o sexo da pessoa "<< x + 1 <<":";
		string sexo_inicial;
		
		limpa_buffer();
		
		while (getline(cin, sexo_inicial))
		{
			if (sexo_inicial.length() == 1 && ((tolower(sexo_inicial[0]) == 'm') || (tolower(sexo_inicial[0]) == 'f')))
			{
				cadastro[x].sexo = tolower(sexo_inicial[0]);
				break;	
			}
			else
			{
				cout << "ERRO! Informe seu sexo com M ou F." << endl << ">";	
			}
		}
		/////////////////////////////////////////
		cout << "Cadastrado!" << endl;
		
		limpa_buffer();
		
		
	cout << endl;
	mostrar(cadastro);
}