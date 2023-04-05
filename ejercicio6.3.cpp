#include <iostream>
using namespace std;

void ordenamientoBurbuja(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int mediaDelArrglo(int arr[], int n){
	int media = 0;
	for(int i = 0; i < n - 1; i++){
		media += arr[i];
	}
	media = media/n;
	return media;
}

int main(int argc, char *argv[]) {
	int cantidad;
	int numeros[99];
	cout<<("Digite la cantidad de numeros: ");
	cin>>cantidad;
	
	for(int i=0; i<=cantidad; i++){
		cout<<("Digite el numero: ");
		cin>>numeros[i];
	}
	
	ordenamientoBurbuja(numeros,cantidad);
	cout<<("El numero mayor es: ")<<(numeros[0]);
	cout<<("El numero menos es: ")<<(numeros[cantidad-1]);
	cout<<("La media de la serie es de: ")<<(mediaDelArrglo(numeros,cantidad));
	return 0;
}

