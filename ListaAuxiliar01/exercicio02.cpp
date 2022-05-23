#include <iostream>
#include <locale.h>
using namespace std;

//O custo de um carro novo ao consumidor, é a soma do custo de fábrica com o custo dos
//impostos (aplicados ao custo de fábrica), acrescido do percentual do revendedor. Supondo
//que a percentagem do revendedor seja de 10% e que os impostos custam 45% do custo de
//fábrica, faça um algoritmo que determine o preço final do automóvel (custo ao consumidor). 

 main(){
	setlocale(LC_ALL, "Portuguese"); 
	cout << "Exercício 02\n";
	//var
	float custoFabrica, totalComissaoRevendor, totalImpostos, precoFinal;
	float comissaoRevendedor = 0.10,  impostos = 0.45;
	
	cout << "Digite o custo de fábrica: ";
	cin >> custoFabrica;
	
	totalComissaoRevendor = custoFabrica * comissaoRevendedor;
	totalImpostos = custoFabrica*impostos;
	
	precoFinal = (custoFabrica+totalComissaoRevendor+totalImpostos);
	
	cout << "Custo ao Consumidor: "<<precoFinal;
}


