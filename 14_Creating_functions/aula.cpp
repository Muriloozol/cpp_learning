#include <iostream>

using namespace std;

// Prototyping (?)
bool par(int);

int main(){

	int num;
	cout << "Digite um numero:" << endl;
	cin >> num;
	cout << par(num) << endl;
	return 0;
}

// Declaring a function
bool par(int num){
	return num % 2 ==0;
};
