#include <iostream>
#include "uteis.h"

// --- Função main para testar tudo ---
int main() {
    string texto_teste = "   \n  Ola Mundo, Bem-Vindo ao C++!   \t ";

    cout << "Original:     '" << texto_teste << "'\n\n";

    cout << "to_lower:     '" << to_lower(texto_teste) << "'\n";
    cout << "to_upper:     '" << to_upper(texto_teste) << "'\n";
    cout << "lstrip:       '" << lstrip(texto_teste) << "'\n";
    cout << "rstrip:       '" << rstrip(texto_teste) << "'\n";
    cout << "trim:         '" << strip(texto_teste) << "'\n\n";

    // Encadeando as funções
    string resultado_final = strip(to_upper(texto_teste));
    cout << "Tudo junto:   '" << resultado_final << "'\n";

    return 0;
    
}