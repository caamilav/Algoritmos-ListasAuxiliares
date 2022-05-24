#pragma region Enunciado
//Uma loja deseja fazer o balancete do mês baseando - se no valor das notas fiscais de
//mercadorias vendidas.Faça um algoritmo para ler um conjunto indeterminado de fichas
//contendo, cada uma, o valor da nota fiscal.Para encerrar digite 0 (zero)no valor da NF.
//Calcule e imprima :
//a) O número de NFs abaixo de R$ 1.000, 00
//b) O número de NFs entre R$ 1.000, 00 e R$ 5.000, 00
//c) O número de NFs acima de R$ 5.000, 00
//d) O número total de Notas Fiscais
//e) O valor total de vendas no mês
#pragma endregion

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << "Exercício 06\n\n";

    float valor = -1;
    int qtdAbaixoMil = 0, qtdEntreMilEhCincoMil = 0, qtdAcimaCincoMil = 0;
    int totalNotasFiscais = 0;
    int totalVendas = 0;

    while(valor != 0){

        cout << "Informe o valor da NF: ";
        cin >> valor;
        
        if (valor != 0) {
            if (valor < 1000)
                qtdAbaixoMil++;
            else if (valor >= 1000 && valor <= 5000)
                qtdEntreMilEhCincoMil++;
            else if (valor > 5000)
                qtdAcimaCincoMil++;

            totalNotasFiscais++;
            totalVendas += valor;
        }
    }

    //a) 
    cout << "\nO número de NFs abaixo de R$ 1.000,00: " << qtdAbaixoMil;
    //b) 
    cout << "\nO número de NFs entre R$ 1.000,00 e R$ 5.000,00: " << qtdEntreMilEhCincoMil;
    //c) 
    cout << "\nO número de NFs acima de R$ 5.000,00: " << qtdAcimaCincoMil;
    //d) 
    cout << "\nO número total de Notas Fiscais: " << totalNotasFiscais;
    //e) 
    cout << "\nO valor total de vendas no mês: " << totalVendas;

}