#include <iostream>
#include <locale.h>
using namespace std;

//Construa um algoritmo para pagamento de comissão de vendedores de peças, levando em
//consideração que sua comissão será de 5% do total da venda e que você tem os seguintes
//dados: Identificação do vendedor, Preço unitário da peça e Quantidade vendida.
 main(){
	setlocale(LC_ALL, "Portuguese"); 
	cout << "Exercício 03\n";
	//variaveis
	int idVendedor, qtdPecas;
	float precoUnitario, totalVenda, totalComissao;
	const float percentualComissaoVendedor = 0.05;
	
	cout << "Informe o preço unitária da peça: ";
	cin >> precoUnitario;
	cout << "Informe a quantidade de peças: ";
	cin >> qtdPecas;	
	cout << "Informe o ID do Vendedor: ";
	cin >> idVendedor;	
	
	totalVenda = precoUnitario*qtdPecas;
	
	totalComissao = totalVenda*percentualComissaoVendedor;
	
	cout << "Comissão: "<<totalComissao;
	

	
	
	
	
	
}
