#include <iostream>
#include <string>   
#include <limits>   
#include <cctype>   
#include "parametros.h"
#include "uteis.h"

using namespace std;

void limpa_buffer()
{
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

class Cadastro
{
	private:
		int idade;
		char sexo;
		string nome;
		
		
	public:
		Cadastro()
		{
		idade = 18;
		sexo = 'm';
		nome = "tester";	
		}
	void cadastrar()
	{
		cout << "---------------------" << endl;
		cout << "Informe o nome: ";
		getline(cin, nome);
		
		cout << "Informe a idade: ";
		while (!(cin >>idade) || idade < 0)
		{
			cout << "ERRO! Digite uma idade valida; " << endl << ":";
			
			cin.clear();
		}
		
		limpa_buffer();
		cout << "Informe o sexo da pessoa:";
		
		string sexo_inicial;
		
		
		while (getline(cin, sexo_inicial))
		{
			if (sexo_inicial.length() == 1 && ((tolower(sexo_inicial[0]) == 'm') || (tolower(sexo_inicial[0]) == 'f')))
			{
				sexo = tolower(sexo_inicial[0]);
				break;	
			}
			else
			{
				cout << "ERRO! Informe seu sexo com M ou F." << endl << ">";	
			}
		}
		
	}
	void mostrar()
	{
		cout
		 << "Nome: " <<nome 
		 << endl
		 << "Sexo: " <<sexo
		 << endl;
		 
		 if (sexo == 'f' && idade >= 30)
		 {
		 	cout << "Nao eh elegante revelar a idade de uma dama.";
		 }
		 else
		 {
		 	cout 
			<< "Idade: " << idade;
		 }
	}
	
};

int main()
{

    Cadastro pessoa;
    
    pessoa.cadastrar();
    pessoa.mostrar();

}