//Construa um algoritmo que leia a idade e altura de 20 alunos e ao final apresente a média
//de idade dos alunos acima de 1, 75 de altura e quantos alunos maiores 25 anos existe na
//turma.

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << "Exercício 08\n\n";

    int idade;
    float altura, mediaIdadeAcima1m75;
    int somadorIdade = 0, contadorAltura = 0, contadorMaiores25Anos = 0;
    
    for (int i = 0; i< 3;i++) {
        cout << "Informe a idade: ";
        cin >> idade;
        cout << "Informe a altura: ";
        cin >> altura;

        if (altura > 1.75) {
            somadorIdade += idade;
            contadorAltura++;
        }
        if (idade > 25)
            contadorMaiores25Anos++;

    }
    mediaIdadeAcima1m75 = somadorIdade / contadorAltura;
    cout << "\nMédia de idade dos alunos acima de 1.75 de altura: " << mediaIdadeAcima1m75;
    cout << "\nTotal de alunos maiores de 25 anos: " << contadorMaiores25Anos;
}