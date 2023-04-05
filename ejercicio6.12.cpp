#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	double n = 0;
	double suma = 0;
	cout<<("Digite la cantidad de numero de serie que se sumara: ");
	cin>>n;
	
	for(int i = 1; i <=n ; i++){
		double digito  =(i/pow(2,i));
		suma = suma + digito;
	}
	cout<<("La suma de la serie es: ")<<suma;
	return 0;
}
