//A Escolinha de Futebol Bom de Bola solicitou que voc� construa um algoritmo que leia o
//nome e a idade de v�rios inscritos na escolinha.De acordo com a idade do jogador,
//classifique - os:
//6 a 11 anos Mirim
//12 a 17 anos Juvenil
//18 em diante Adulto
//No final, o programa dever� informar o total de inscritos em cada categoria.
//Obs : Como o n�mero de inscritos � indeterminado, para encerrar a etapa de leitura, o
//usu�rio dever� informar 0 (zero)para a idade.
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << "Exerc�cio 04\n\n";

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