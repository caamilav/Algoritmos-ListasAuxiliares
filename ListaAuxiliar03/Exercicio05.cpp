//Construa um algoritmo que leia a nota e o sexo de 20 alunos e apresente qual sexo possui a
//melhor média de notas.
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << "Exercício 05\n\n";

    int sexo;
    float nota, mediaF, mediaM;
    float somadorF = 0, somadorM = 0;
    

    for (int i = 0; i < 20; i++) {
        cout << "Informe a nota: ";
        cin >> nota;
        cout << "Informe o sexo 1 - feminino ou 2 - masculino: ";
        cin >> sexo;

        if (sexo == 1)
            somadorF += nota;
        else if (sexo == 2)
            somadorM += nota;
    }

    mediaF = somadorF / 20;
    mediaM = somadorM / 20;

    if (mediaF > mediaM) {
        cout << "\nO sexo feminino possui a melhor média";
    }
    else if (mediaM > mediaF) {
        cout << "\nO sexo masculino possui a melhor média";
    } 
    else {
        cout << "\nA média do sexo masculino e do sexo feminino são iguais";
    }

    cout << "\nMédia Masculino: " << mediaM;
    cout << "\nMédia Feminino: " << mediaF;
}