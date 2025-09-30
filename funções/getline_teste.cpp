#include <iostream>
#include <string>

using namespace std;
int main()
{
	string nome_completo;
	string nome_metade;
	
	cout << "Digite seu nome: ";
	getline(cin, nome_completo);
	
	cout << "Digite seu nome: ";
	cin >> nome_metade;
	
	cout << "Nome completo usando getline : "<< nome_completo << endl;
	cout << "Nome cortando no espaço com Cin : "<< nome_metade;
}