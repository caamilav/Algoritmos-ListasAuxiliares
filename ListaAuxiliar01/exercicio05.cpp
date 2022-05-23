#include <iostream>
#include <locale.h>
using namespace std;
//Faça um algoritmo que leia os preços de uma mercadoria em 17/03 e 18/03, tendo como
//base a variação dos preços desta mercadoria, calcule a taxa de inflação ou deflação ocorrida no período.
main(){
	setlocale(LC_ALL, "Portuguese");
	cout << "Exercício 05\n";
	
	float valor1, valor2;
	
	cout << "Informe o valor em 17/03: ";
	cin >> valor1;
	
	cout << "Informe o valor em 18/03: ";
	cin >> valor2;
	
	if(valor1 > valor2){
		cout << "Deflação";	
	}	
	else{
		cout << "Inflação";
	}

	
}


