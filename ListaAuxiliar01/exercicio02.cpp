#include <iostream>
#include <locale.h>
using namespace std;

//O custo de um carro novo ao consumidor, � a soma do custo de f�brica com o custo dos
//impostos (aplicados ao custo de f�brica), acrescido do percentual do revendedor. Supondo
//que a percentagem do revendedor seja de 10% e que os impostos custam 45% do custo de
//f�brica, fa�a um algoritmo que determine o pre�o final do autom�vel (custo ao consumidor). 

 main(){
	setlocale(LC_ALL, "Portuguese"); 
	cout << "Exerc�cio 02\n";
	//var
	float custoFabrica, totalComissaoRevendor, totalImpostos, precoFinal;
	float comissaoRevendedor = 0.10,  impostos = 0.45;
	
	cout << "Digite o custo de f�brica: ";
	cin >> custoFabrica;
	
	totalComissaoRevendor = custoFabrica * comissaoRevendedor;
	totalImpostos = custoFabrica*impostos;
	
	precoFinal = (custoFabrica+totalComissaoRevendor+totalImpostos);
	
	cout << "Custo ao Consumidor: "<<precoFinal;
}


