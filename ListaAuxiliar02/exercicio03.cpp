#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout << "Exercício 03\n";
	float altura;
	string opcaoSexo;
	float pesoIdeal;
	
	do {
		cout << "Escolha o Sexo: \n| 1 - Masculino \n| 2 - Feminino \n";
		cin >> opcaoSexo;	
	} while (opcaoSexo != "1" && opcaoSexo != "2" );
	
	cout << "Informe a Altura: ";
	cin >> altura;
	
	if(opcaoSexo == "1"){
		pesoIdeal = (72.7 * altura) - 58;		
	} else if (opcaoSexo == "2"){
		pesoIdeal = (62.1 * altura) - 44.7;	
	}
	
	cout << "Peso Ideal: " << pesoIdeal;
		
}
