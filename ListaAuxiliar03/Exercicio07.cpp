//Construa um algoritmo que leia o nome e a nota de 40 alunos e se o aluno tiver uma nota
//igual ou superior a 7, informe que este aluno está aprovado, caso contrário, apresente que
//o mesmo está reprovado.
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << "Exercício 07\n\n";

    string nome;
    float nota;
    for (int i = 0; i < 40; i++) {
        cout << "Nome do aluno: ";
        cin >> nome;
        cout << "Nota: ";
        cin >> nota;

        if (nota >= 7)
            cout << "O aluno está aprovado. " << endl;
        else 
            cout << "O aluno está reprovado. " << endl;

        cout << endl;
    }
}