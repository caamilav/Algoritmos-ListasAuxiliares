//Construir um algoritmo que determine o menor elemento para um conjunto de 10 valores.
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << "Exercício 03\n\n";

    int valor, menorValor;
    for (int i = 1; i <= 10; i++) {
        cout << i<<"º Valor: ";
        cin >> valor;

        if (i == 1)
            menorValor = valor;

        if (valor < menorValor)
            menorValor = valor;
    }

    cout << "O menor valor é: " << menorValor;
}