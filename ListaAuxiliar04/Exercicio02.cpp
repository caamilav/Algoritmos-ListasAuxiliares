//Construir um algoritmo que determine o maior elemento num conjunto de 10 valores.
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << "Exercício 02\n\n";

    int contador = 1;
    int valor;
    int maior;
    while (contador <= 10) {
        cout << contador << "º Valor: ";
        cin >> valor;
        if (contador == 1)
            maior = valor;

        if (valor > maior) {
            maior = valor;
        }

        contador++;
    }

    cout << "O maior valor é: " << maior;
}