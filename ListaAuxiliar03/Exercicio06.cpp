//Construa um algoritmo que apresente na tela todos os n�meros pares entre 55 e 189.
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << "Exerc�cio 06\n\n";
    for (int i = 55; i <= 189; i++) {
        if (i % 2 == 0)
            cout << i << endl;
    }
}