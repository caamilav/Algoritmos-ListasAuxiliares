#include <iostream>
#include <locale.h>
using namespace std;

//Construa um algoritmo para pagamento de comiss�o de vendedores de pe�as, levando em
//considera��o que sua comiss�o ser� de 5% do total da venda e que voc� tem os seguintes
//dados: Identifica��o do vendedor, Pre�o unit�rio da pe�a e Quantidade vendida.
 main(){
	setlocale(LC_ALL, "Portuguese"); 
	cout << "Exerc�cio 03\n";
	//variaveis
	int idVendedor, qtdPecas;
	float precoUnitario, totalVenda, totalComissao;
	const float percentualComissaoVendedor = 0.05;
	
	cout << "Informe o pre�o unit�ria da pe�a: ";
	cin >> precoUnitario;
	cout << "Informe a quantidade de pe�as: ";
	cin >> qtdPecas;	
	cout << "Informe o ID do Vendedor: ";
	cin >> idVendedor;	
	
	totalVenda = precoUnitario*qtdPecas;
	
	totalComissao = totalVenda*percentualComissaoVendedor;
	
	cout << "Comiss�o: "<<totalComissao;
	

	
	
	
	
	
}
