#include <iostream>

using namespace std;

int main(){

	int array[] = {1, 2, 3, 4, 5};
	int* parray = &array[0];

	for (int i = 0; i < 5; i++){
		cout << *parray << endl;
		parray++;
	}
	parray--;

	// Pointers to pointers
	int** pparray = &parray;

	cout << **pparray << endl;

	return 0;
}
