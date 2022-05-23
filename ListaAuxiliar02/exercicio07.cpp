#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout << "Exercício 07\n";
	
	string numeroTelefone, nomeConsumidor, tipoTelefone;
	int pulsos;
	float totalInterubanos;
	//
	float tarifaBasica, valorServicoExcedente, valorInterubanos;
	
	cout << "Informe os seguintes os dados: \n";
	cout << "- Nome do Consumidor: ";
	cin >> nomeConsumidor;
	cout << "- Número de Telefone: ";
	cin >> numeroTelefone;
	cout << "- Total de Pulsos Registrados: ";
	cin >> pulsos;
	cout << "- Total de Interubanos (em minutos): ";
	cin >> totalInterubanos;
	do {
	cout << "- Tipo de Telefone \n|1 - Residencial \n|2 - Comercial";
	cout << "\nSelecione o tipo: ";
	cin >> tipoTelefone;
	} while(tipoTelefone != "1" && tipoTelefone != "2");

	cout << "\n--------------\n";
	
	//tarifa basica
	if(tipoTelefone == "1"){
		tarifaBasica = 17.20;
	} else {
		tarifaBasica = 25.80;
	}
	cout << "\nTarifa Básica: "<<tarifaBasica;

	//serviço excedente
	if(pulsos > 90){	
		int qtd = pulsos - 90;
		valorServicoExcedente = qtd * 0.07;	
		cout << "\nValor do Serviço Excedente: " << valorServicoExcedente;
	}
	
	//interubanos
	valorInterubanos = 0.50 * totalInterubanos;
	cout << "\nValor dos Interubanos: " << valorInterubanos;
	//imposto
	cout << "\nImpostos: 12%";
	
	//total da conta
	float calculoConta  = (tarifaBasica + valorServicoExcedente + valorInterubanos);
	float impostos = 0.12*calculoConta;
	float total = calculoConta+impostos;
	cout << "\nTotal da Conta: ";
	printf("%.2f", total);
	
	
}
