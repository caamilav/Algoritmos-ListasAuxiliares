//Construa um algoritmo que leia o nome e a idade de v�rios alunos de uma turma e ao final
//apresente na tela a idade do aluno mais velho.Como o n�mero de alunos � indeterminado,
//fa�a com que para parar a leitura dos nomes e idades, o usu�rio tenha que digitar a palavra
//�fim� no nome.
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << "Exerc�cio 03\n\n";

    string nome;
    int idade;
    int idadeMaisVelho;
    int contador = 0;
    while (nome != "fim") {
        cout << "Informe o nome: ";
        cin >> nome;

        if (nome != "fim") {
            cout << "Informe a idade: ";
            cin >> idade;

            if (contador == 0)
                idadeMaisVelho = idade;

            if (idade > idadeMaisVelho)
                idadeMaisVelho = idade;

            contador++;
        }
    }

    if (contador != 0) {
        cout << "O aluno mais velho tem " << idadeMaisVelho << " anos";
    }
}