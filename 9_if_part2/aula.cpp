#include <iostream>

using namespace std;

int main(){
	
	int num = 10;

	// Aninhamento de if
	if (num > 5){
		if (num <= 10){
			cout << "Numero maior que 5 e menor ou igual a 10" << endl;
		} else{
			cout << "Numero maior que 10" << endl;
		}
	} else{
		cout << "Numero menor ou igual a 5" << endl;
	}

	// Operadores Lógicos
	// AND
	if ((num % 2 == 0) && num < 20){
		cout << "Numero par e menor que 20" << endl;		
	}
	// OR 
	if ((num % 2 == 0) || num < 20){
		cout << "Numero par ou menor que 20" << endl;		
	}
	// NOT
	if (!(num % 2 == 0)){
		cout << "Numero impar" << endl;		
	}

	return 0;
}
