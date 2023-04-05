#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string nombre;
	int salario;
	int salarioAumentado;
	bool salarioValido = false;
	
	do{
	   cout<<("Digite el nombre del empleado: ");
	   cin>>nombre;
	   cout<<("Digite la cantidad del sueldo: ");
	   cin>>salario;
	   
	   if(salario>=0){
		   salarioValido = true;
	   }
	}while(salarioValido = false);
	
	if(salario>0 && salario<=9000){
		salarioAumentado = salario + (salario*0.20);
	}else if(salario>9000 && salario <=15000){
		salarioAumentado = salario + (salario * 0.10);
	}else if(salario>15000 && salario <=20000){
		salarioAumentado = salario + (salario * 0.05);
	}else{
		salarioAumentado = salario;
	}
	
	cout<<("El salario con el aumento aplicado es de: ")<<(salarioAumentado);
	return 0;
}

