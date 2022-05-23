#include <iostream>
#include <locale.h>
using namespace std;

//Uma pessoa comprou 3 (tr�s) artigos em uma loja. Para cada artigo, tem-se nome, pre�o e
//percentual de desconto. Fa�a um algoritmo que imprima nome do artigo, pre�o sem
//desconto, pre�o com desconto de cada artigo e o total a pagar.

 main(){
	setlocale(LC_ALL, "Portuguese"); 
	cout << "Exerc�cio 04\n";

	
	int contador = 1;
	int qtdArtigos;
	string nome[qtdArtigos];
	float valor[qtdArtigos];
	float percentualDesconto[qtdArtigos];
	float precoComDesconto[qtdArtigos];
	float total;
	
	cout << "Informe a quantidade de artigos: ";
	cin >> qtdArtigos;
	
	for(int i=0; i<qtdArtigos; i++){
		cout << "\nArtigo " <<contador << "\n";
		cout << "Nome Artigo: ";
		cin >> nome[i];
		cout << "Valor: ";
		cin >> valor[i];
		cout << "Percentual de Desconto: ";
		cin >> percentualDesconto[i];
		contador++;
	}
	
	for(int i = 0; i<qtdArtigos; i++){
		precoComDesconto[i] = valor[i] - (valor[i]* (percentualDesconto[i]/100) );
	}

	for(int i=0; i<qtdArtigos; i++){
		
	
		cout << "\nNome Artigo: ";
		cout << nome[i] << "\n";
		cout << "Valor: ";
		cout << valor[i]  << "\n";
		cout << "Valor com Desconto: ";
		cout << precoComDesconto[i]  << "\n";
	
	}
	
	for(int i=0; i<3; i++){
		total += precoComDesconto[i]; 
	}
	
	cout << "\nTotal a Pagar: " << total;
}
