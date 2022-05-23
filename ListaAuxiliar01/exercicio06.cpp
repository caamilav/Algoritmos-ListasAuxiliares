#include <iostream>
#include <locale.h>
#define RED "\e[0;31m"
using namespace std;

//Considerando que para um consórcio, sabe-se o número total de prestações, a quantidade
//de prestações pagas e o valor atual da prestação, escreva um algoritmo que determine o
//total pago pelo consorciado e o saldo devedor.

	

 main(){
 	
	setlocale(LC_ALL, "Portuguese");
	cout << "Exercício 06\n";
	
	int totalPrestacoes, qtdPrestacoesPagas;
	float valorPrestacao, totalPago, saldoDevedor, valorTotalConsorcio;

	cout << "\nInforme o Nº total de prestações: ";
	cin >> totalPrestacoes;
	
	cout << "\nInforme a quantidade de prestações pagas: ";
	cin >> qtdPrestacoesPagas;
	
	if(qtdPrestacoesPagas > totalPrestacoes){
		cout << "---- a quantidade de prestações pagas não pode ser maior que o Nº total de prestações";
		cout << "\nInforme a quantidade de prestações pagas: ";
	 	cin >> qtdPrestacoesPagas; }

	cout << "\nInforme o valor da prestação: ";
	cin >> valorPrestacao;
	
	valorTotalConsorcio = totalPrestacoes*valorPrestacao;
	totalPago = qtdPrestacoesPagas*valorPrestacao;
	saldoDevedor = valorTotalConsorcio-totalPago;

	cout << "\nTotal pago: " << totalPago;
	cout << "\nSaldo devedor: " <<saldoDevedor;
		
} 


