#include <iostream>
#include <locale.h>
#define RED "\e[0;31m"
using namespace std;

//Considerando que para um cons�rcio, sabe-se o n�mero total de presta��es, a quantidade
//de presta��es pagas e o valor atual da presta��o, escreva um algoritmo que determine o
//total pago pelo consorciado e o saldo devedor.

	

 main(){
 	
	setlocale(LC_ALL, "Portuguese");
	cout << "Exerc�cio 06\n";
	
	int totalPrestacoes, qtdPrestacoesPagas;
	float valorPrestacao, totalPago, saldoDevedor, valorTotalConsorcio;

	cout << "\nInforme o N� total de presta��es: ";
	cin >> totalPrestacoes;
	
	cout << "\nInforme a quantidade de presta��es pagas: ";
	cin >> qtdPrestacoesPagas;
	
	if(qtdPrestacoesPagas > totalPrestacoes){
		cout << "---- a quantidade de presta��es pagas n�o pode ser maior que o N� total de presta��es";
		cout << "\nInforme a quantidade de presta��es pagas: ";
	 	cin >> qtdPrestacoesPagas; }

	cout << "\nInforme o valor da presta��o: ";
	cin >> valorPrestacao;
	
	valorTotalConsorcio = totalPrestacoes*valorPrestacao;
	totalPago = qtdPrestacoesPagas*valorPrestacao;
	saldoDevedor = valorTotalConsorcio-totalPago;

	cout << "\nTotal pago: " << totalPago;
	cout << "\nSaldo devedor: " <<saldoDevedor;
		
} 


