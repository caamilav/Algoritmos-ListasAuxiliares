#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout << "Exerc�cio 06\n";
	float x, y, z;
	bool ehTriangulo;
	cout << "Informe o valor de X: ";
	cin >> x;
	cout << "Informe o valor de Y: ";
	cin >> y;
	cout << "Informe o valor de Z: ";
	cin >> z;
	
	if(x < (y+z) && y < (x+z) && z < (y+x) ){
		ehTriangulo = true;
	}
	
	if(ehTriangulo){
		if(x == y && y == x){
			cout << "Tri�ngulo Equil�tero";
		} else if (x == y || y == z || z == x){
			cout << "Tri�ngulo Is�celes";
		} else if(x != y && z !=y){
			cout << "Tri�ngulo Escaleno";
		}
	} else {
		cout << "N�o � um tri�ngulo.";
	}
	
}
