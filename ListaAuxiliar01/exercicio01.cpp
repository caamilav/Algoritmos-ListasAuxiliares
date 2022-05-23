#include <iostream>
#include <locale.h>

using namespace std;

 main(){
  setlocale(LC_ALL, "Portuguese"); 
  cout <<"\tExercício 01 - Conversão de Temperatura\n";
  
  //declaração de variaveis
  float temperaturaCelsius, temperaturaFahrenheit, temperaturaKevin;
  int opcao = 0;
  bool continuar = true;
  char rContinuar =' ';
   
  while(continuar){
  
  //menu;
  cout << "\n * Menu *\n";
  cout << " Digite 1 - Converter graus Celsius para Fahrenheit\n Digite 2 - Converter graus Celsius para Kevin\n";
  cout << " Digite 3 - Converter Fahrenheit para graus Celsius\n Digite 4 - Converter Fahrenheit para Kevin\n";
  cout << " Digite 5 - Converter Kevin para graus Celsius\n Digite 6 - Converter Kevin para Fahrenheit\n\n";
  //obtem opcao;
  cout << " Escolha uma opção: ";
  cin >> opcao;
  cout << "\n";

	while(opcao != 1&&opcao!=2&&opcao!=3&&opcao!=4&&opcao!=5&&opcao!=6){

		cout << " Por favor, escolha uma opção válida!\n";
		cout << " Escolha uma opção: ";
 		cin >> opcao;	
 		cout << "\n";
	}

	//switch que realiza a conversao segundo a opcao escolhida e imprime o resultado;
	switch(opcao){
		case 1:
			cout << "\tDigite a Temperatura em graus Celsius: ";
 		 	cin >> temperaturaCelsius;
 		 	temperaturaFahrenheit = temperaturaCelsius * 1.8 + 32;
  			cout << "\tTemperatura em Fahrenheit: "<<temperaturaFahrenheit <<" °F\n\n";

  		break;
  		case 2:
  			cout << "\tDigite a Temperatura em graus Celsius: ";
  			cin >> temperaturaCelsius;
  			temperaturaKevin = temperaturaCelsius +  273.15;
  			cout << "\tTemperatura em Kevin: "<<temperaturaKevin<<" K\n\n";
  		break;
  		case 3:
  			cout << "\tDigite a Temperatura em Fahrenheit: ";
  			cin >> temperaturaFahrenheit;
  			temperaturaCelsius = (temperaturaFahrenheit-32)*5/9;
  			cout << "\tTemperatura em graus Celsius: "<<temperaturaCelsius<<" °C\n\n";
  		break;
  		case 4:
  			cout << "\tDigite a Temperatura em Fahrenheit: ";
  			cin >> temperaturaFahrenheit;
  			temperaturaKevin = (temperaturaFahrenheit-32)*5/9 + 273.15;
  			cout << "\tTemperatura em Kevin: "<<temperaturaKevin<<" K\n\n";
  		break;
		case 5:
			cout << "\tDigite a Temperatura em Kevin: ";
			cin >> temperaturaKevin;
			temperaturaCelsius = temperaturaKevin - 273.15;
			cout << "\tTemperatura em graus Celsius: "<<temperaturaCelsius<<" °C\n\n";
		break;
		case 6: 
			cout << "\tDigite a Temperatura em Kevin: ";
			cin >> temperaturaKevin;
			temperaturaFahrenheit = (temperaturaKevin - 273.15)*9/5 + 32;
			cout << "\tTemperatura em Fahrenheit: "<<temperaturaFahrenheit<<" °F\n\n";
  		break;
	} //fim switch
	
	//opcao de continuar ou sair do programa;
	cout << " Digite 1 para continuar ou 0 para sair: ";
	cin >> rContinuar;
	//caso o usuario digite uma opcao invalida, imprime uma mensagem e pede novamente a entrada;
	while(rContinuar !='1'&&rContinuar!='0'){
		cout << " Por favor, escolha uma opção válida!\n";
		cout << " Digite 1 para continuar ou 0 para sair: ";
	    cin >> rContinuar;
	}
	//tratamento da entrada rContinuar;
	if(rContinuar == '1'){
		continuar = true;
	} else if(rContinuar == '0'){
		continuar = false;
	}

} }

