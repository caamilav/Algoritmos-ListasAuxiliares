//Para N n�meros, mostre quantos deles s�o negativos atrav�s de um algoritmo.
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << "Exerc�cio 01\n\n";

    int qtd,numero, contadorNegativos = 0;
    cout << "Informe a quantidade de n�meros: ";
    cin >> qtd;

    for (int i = 0; i < qtd; i++) {
        cout << "Informe um n�mero: ";
        cin >> numero;

        if (numero < 0)
            contadorNegativos++;
    }
    cout << endl;
    cout << "Total de n�meros negativos: " << contadorNegativos;
}