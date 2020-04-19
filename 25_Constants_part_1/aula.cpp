#include <iostream>

using namespace std;

int main(){

	// Const must be initializied when created
	const double PI = 3.14;

	// The following line would raise an error
//	PI = 2.54

	cout << PI << endl;

	const int vet[] = {1, 2, 3, 4, 5};

	const int* p1; // Pointer to array of constant int 
	int const* p2; // Pointer to array of constant int
	int* const p3 = new int[3]; // Here the pointer is constant

	p1 = &vet[0];
        p2 = &vet[1];

	// The following line would raise an error
//	*p1 = 10;

	*p3 = 10;
	*(p3 + 1) = 20;
	*(p3 + 2) = 30;

	for(int i=0; i<3; i++)
		cout << *(p3+i) << endl;


	return 0;
}
