#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout << "Exerc�cio 05\n";
	float nota;
	string status;
	cout << "Informe a nota: ";
	cin >> nota;
	
	if(nota >= 7 && nota <= 10){
		status = "Aprovado";
	} else if (nota >= 5 && nota <= 6.9){
		status = "Em Recuper��o";
	} else {
		status = "Reprovado";
	}
	
	cout << "O aluno est� "<<status;
}
