#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
/*
The arguments of main is used on command line when program is called.

	argc	->	argument counter
	argv	->	argument vector

	argv is an array of pointers
*/
	cout << "argc:\t" << argc << endl;
	cout << "argv[0]:" << argv[0] << endl;

	cout << "Quatidade de argumentos:" << argc << endl;
	cout << "Argumentos passados:" << endl;

	for (int i=0; i<argc; i++)
		cout << "\targv[" << i << "]:\t" << argv[i] << endl;
	return 0;
}


