#include <iostream>
using namespace std;

bool esPrimo(int numero){
	int divisores = 0;
	for(int i = 1; i <= numero; i++){
		if(numero % i == 0){
			divisores++;
		}
	};
	if(divisores == 2){
		return true;
	}else{
		return false;
	}
}

int main(int argc, char *argv[]) {
	
	int numero = 0;
	do{
		cout<<("Digite un numero: ");
		cin>>numero;
		
	}while(!esPrimo(numero));
	cout<<(numero)<<(" es primo");
	return 0;
}

