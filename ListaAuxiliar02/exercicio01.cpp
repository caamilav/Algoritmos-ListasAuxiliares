#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout << "Exerc�cio 01\n";
	float pesoRegulamento = 50, multaPorQuiloExcedente = 4;
	float pesoPeixe, totalMulta, pesoExcedente;
	cout << "Informe o Peso do Peixe: ";
	cin >> pesoPeixe;
	
	if(pesoPeixe > pesoRegulamento){
		pesoExcedente  = pesoPeixe - pesoRegulamento;
		cout << "\nSeu peixe est� " << pesoExcedente << "kg acima do Regulamento";
		totalMulta = pesoExcedente * multaPorQuiloExcedente;
		cout << "\nMulta de R$ " <<totalMulta;
	} else 
	 cout << "\n O peso do peixe est� dentro do Regulamento!";
}
