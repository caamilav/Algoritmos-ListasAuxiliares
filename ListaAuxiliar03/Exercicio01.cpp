Construa um algoritmo que apresente na tela os n�meros de 1 a 30.

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << "Exerc�cio 01\n\n";

    for (int i = 1; i <= 30; i++) {
        cout << i << endl;
    }
}