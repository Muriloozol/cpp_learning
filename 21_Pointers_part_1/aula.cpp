#include <iostream>

using namespace std;

void foo(int* n){
	*n = 30;
}

void foo_arr(int some_array[]){
	some_array[0] = 100;
}

int main(){

	int var = 10;

	// Declarating a pointer
	int* pvar;

	// Point to variable var
	pvar = &var; 

	// Change the value of var
	*pvar = 20;
	
	// Print the values of pointer and variable
	cout << var << endl;
	cout << *pvar << endl;

	int var2 = 50;

	// Pointer
	int* pvar2;
	pvar2 = &var2;
	
	// Pass two different arguments to function foo()
	// but both are memory address
	foo(pvar);
	foo(&var2);

	// Print var and var2 after their pointers pass through foo()
	cout << var << endl;
	cout << var2 << endl;

	// Pointers with arrays
	int* arr = new int[10];
	int aux[10];

	// Assigment values to pointers location
	*(arr + 0) = 10;
	*(arr + 1) = 20;
	*(arr + 2) = 30;

	// Standard assigment to arrays
	aux[0] = 10;
	aux[1] = 20;
	aux[2] = 30;
	
	cout <<"aux[0] = " << aux[0] << endl;

	// Send the array to a function 
	foo_arr(aux);

	// Verify if the original values changed
	cout <<"aux[0] = " << aux[0] << endl;

	return 0;

}
