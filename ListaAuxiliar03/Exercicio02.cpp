//Fa�a um algoritmo que calcula a faixa et�ria de uma turma de 20 alunos.

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << "Exerc�cio 02\n\n";

    float idade, faixaEtaria, somador = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Informe a idade: ";
        cin >> idade;
        cout << endl;
        somador += idade;
    }
    faixaEtaria = somador / 5;

    cout << "Faixa Et�ria: " << faixaEtaria;

}