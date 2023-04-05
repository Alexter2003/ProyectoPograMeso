#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int N = 0;
	double sum = 0, mean, deviationSum = 0, deviationMean, variance;
	
	cout << "Ingrese el valor de N: ";
	cin >> N;
	
	int numeros[99];
	
	for (int i = 0; i < N; i++) {
		cout << "Ingrese el numero #" << i + 1 << ": ";
		cin >> numeros[i];
		sum += numeros[i];
	}
	
	mean = sum / N;
	
	for (int i = 0; i < N; i++) {
		deviationSum += abs(numeros[i] - mean);
	}
	
	deviationMean = deviationSum / N;
	variance = deviationSum / N;
	
	cout << "La media es: " << mean << endl;
	cout << "La desviacion media es: " << deviationMean << endl;
	cout << "La varianza es: " << variance << endl;
	
	return 0;
}
