#include <iostream>
#include <locale.h>
using namespace std;
//Fa�a um algoritmo que leia os pre�os de uma mercadoria em 17/03 e 18/03, tendo como
//base a varia��o dos pre�os desta mercadoria, calcule a taxa de infla��o ou defla��o ocorrida no per�odo.
main(){
	setlocale(LC_ALL, "Portuguese");
	cout << "Exerc�cio 05\n";
	
	float valor1, valor2;
	
	cout << "Informe o valor em 17/03: ";
	cin >> valor1;
	
	cout << "Informe o valor em 18/03: ";
	cin >> valor2;
	
	if(valor1 > valor2){
		cout << "Defla��o";	
	}	
	else{
		cout << "Infla��o";
	}

	
}


