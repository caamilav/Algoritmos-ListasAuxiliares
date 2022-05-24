//A Escolinha de Futebol Bom de Bola solicitou que você construa um algoritmo que leia o
//nome e a idade de vários inscritos na escolinha.De acordo com a idade do jogador,
//classifique - os:
//6 a 11 anos Mirim
//12 a 17 anos Juvenil
//18 em diante Adulto
//No final, o programa deverá informar o total de inscritos em cada categoria.
//Obs : Como o número de inscritos é indeterminado, para encerrar a etapa de leitura, o
//usuário deverá informar 0 (zero)para a idade.
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << "Exercício 04\n\n";

    int idade = -1, totalMirim =0, totalJuvenil=0, totalAdulto=0;
    string nome;
    while (idade != 0) {
        cout << "Informe a idade: ";
        cin >> idade;

        if (idade != 0) {
            cout << "Informe o nome: ";
            cin >> nome;
        }
            if (idade >= 6 && idade <= 11)
                totalMirim++;
            else if (idade >= 12 && idade <= 17)
                totalJuvenil++;
            else if (idade >= 18)
                totalAdulto++;
            cout << endl;
    }

    cout << "\nTotal de inscritos na categoria Mirim: " << totalMirim;
    cout << "\nTotal de inscritos na categoria Juvenil: " << totalJuvenil;
    cout << "\nTotal de inscritos na categoria Adulto: " << totalAdulto;

}