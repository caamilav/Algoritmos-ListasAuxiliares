#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout << "Exerc�cio 02\n";
	float valorTotalVendas;
	float salario;
	cout << "Informe o valor total de vendas: ";
	cin >> valorTotalVendas;
	
	if(valorTotalVendas >=2000){
		salario = valorTotalVendas * 0.1;
	} else {
		salario = valorTotalVendas * 0.075;
	}
	
	cout << "Sal�rio do Vendedor R$: " <<salario;
}
