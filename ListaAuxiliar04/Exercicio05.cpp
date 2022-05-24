//O programador responsável pelo sistema do UNIPLAC resolveu fazer um programa para
//processar os dados dos alunos de Sistemas de Informação.Cada ficha contém o nome,
//sexo, idade, turno(1 para manhã, 2 para noite) e o semestre do aluno.Para encerrar, basta
//que usuário informe 0 (zero)para o turno.

//Construa um algoritmo que leia os dados dos 200 alunos e calcule e imprima :
//a) O número de alunos matriculados em cada turno. - ok
//b) A faixa etária dos alunos calouros(1o e 2o semestre). - ok
//c) O número de mulheres que estudam pela manhã. - ok
//d) Qual sexo possui mais alunos no curso. - ok

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << "Exercício 05\n\n";

    string nome;
    int sexo, idade, turno = -1, semestre;
    int totalAlunosManha = 0, totalAlunosNoite = 0;
    int totalMulheresManha = 0;
    int totalMulheres = 0, totalHomens = 0;
    int contadorCalouros = 0, somadorIdadesCalouros = 0;
    int faixaEtariaCalouros;
    while (turno != 0 ) {

        cout << "Turno: 1 (manhã) ou 2 (noite): ";
        cin >> turno;
        if (turno != 0) {
            cout << "Nome: ";
            cin >> nome;

            cout << "Sexo: 1 (feminino) ou 2 (masculino): ";
            cin >> sexo;

            cout << "Idade: ";
            cin >> idade;

            cout << "Semestre: ";
            cin >> semestre;

            //total de alunos de cada turno
            if (turno == 1)
                totalAlunosManha++;
            else if (turno == 2)
                totalAlunosNoite++;

            //para calcular a faixa etaria dos calouros
            if (semestre == 1 || semestre == 2) {
                somadorIdadesCalouros += idade;
                contadorCalouros++;
            }
                
            //total de mulheres que estudam pela manha
            if (sexo == 1 && turno == 1)
                totalMulheresManha++;
            //total de cada sexo
            if (sexo == 1)
                totalMulheres++;
            else if (sexo == 2)
                totalHomens++;

        }

        cout << endl;
    }

    faixaEtariaCalouros = somadorIdadesCalouros / contadorCalouros;

    //a
    cout << "\nTotal de Aluno no turno da Manhã: " << totalAlunosManha;
    cout << "\nTotal de Aluno no turno da Noite: " << totalAlunosNoite;
    //b
    cout << "\nA faixa etária dos alunos calouros(1o e 2o semestre): " << faixaEtariaCalouros;
    //c
    cout << "\nTotal de mulheres que estudam pela manhã: " << totalMulheresManha;
    //d
    if (totalMulheres > totalHomens)
        cout << "\nO curso possui mais alunas do sexo feminino";
    else if(totalHomens > totalMulheres)
        cout << "\nO curso possui mais alunos do sexo masculino";
    else 
        cout << "\nO curso possui a mesma quantidade de alunos do sexo masculino e feminino";




}