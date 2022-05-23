#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout << "Exercício 06\n";
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
			cout << "Triângulo Equilátero";
		} else if (x == y || y == z || z == x){
			cout << "Triângulo Isóceles";
		} else if(x != y && z !=y){
			cout << "Triângulo Escaleno";
		}
	} else {
		cout << "Não é um triângulo.";
	}
	
}
