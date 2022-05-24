//Para N números, mostre quantos deles são negativos através de um algoritmo.
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << "Exercício 01\n\n";

    int qtd,numero, contadorNegativos = 0;
    cout << "Informe a quantidade de números: ";
    cin >> qtd;

    for (int i = 0; i < qtd; i++) {
        cout << "Informe um número: ";
        cin >> numero;

        if (numero < 0)
            contadorNegativos++;
    }
    cout << endl;
    cout << "Total de números negativos: " << contadorNegativos;
}