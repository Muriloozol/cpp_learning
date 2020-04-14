#include <iostream>

using namespace std;

void foo();

int num_global = 10;

int main(){
	
	foo();
	foo();
	foo();
	
	return 0;
}

void foo(){

	int num_local = 20;
	static int num_static = 30;

	cout << "Global variable:\t" << num_global << endl;
	cout << "Local variable: \t" << num_local << endl;
	cout << "Statice variable:\t" << num_static << endl;
	cout << endl;	

	num_static++;
}
