//Construa um algoritmo que leia a nota e o sexo de 20 alunos e apresente qual sexo possui a
//melhor m�dia de notas.
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << "Exerc�cio 05\n\n";

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
        cout << "\nO sexo feminino possui a melhor m�dia";
    }
    else if (mediaM > mediaF) {
        cout << "\nO sexo masculino possui a melhor m�dia";
    } 
    else {
        cout << "\nA m�dia do sexo masculino e do sexo feminino s�o iguais";
    }

    cout << "\nM�dia Masculino: " << mediaM;
    cout << "\nM�dia Feminino: " << mediaF;
}