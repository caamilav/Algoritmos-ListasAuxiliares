#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout << "Exercício 04\n";
	float valor;
	cout << "Informe um valor: ";
	cin >> valor;
	if(valor < 0){
		cout << "Valor Negativo";
	} else {
 	cout << "Valor Positivo";
	}
}
