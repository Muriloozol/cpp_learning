#include <iostream>

using namespace std;

void message(int n){
	cout << "numero:\t" << n << endl;
}

void message(){

	cout << "Hello World"<< endl;
}

int main(){
	int i;
	message(i=10);
	message();

	return 0;
}
