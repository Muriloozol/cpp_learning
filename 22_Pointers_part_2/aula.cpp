#include <iostream>

using namespace std;

int main(){

	int* arr = new int[10];

	cout << "Digite um numero: ";
	cin >> *(arr+1);

	cout << "Voce digitou: " << *(arr+1)<< endl;

	// Cleaning allocated memory
	delete[] arr;

	cout << "Voce digitou: " << *(arr+1)<< endl;

	// Good practice:
	arr = NULL;

	// Expected error
	cout << "Voce digitou: " << *(arr+1)<< endl;

	return 0;
}
