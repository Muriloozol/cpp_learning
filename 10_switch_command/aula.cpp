#include <iostream>

using namespace std;

int main(){
	int num = 10;

	switch(num){
	
	case 9:
		cout << "Numero 9" << endl;
	//	break;
	case 10:
		cout << "Numero 10" << endl;
	//	break;
	case 11:
		cout << "Numero 11" << endl;
		break;
	case 12:
		cout << "Numero 12" << endl;
		break;
	default:
		cout << "Nao encontrado" << endl;
	}

	return 0;
}
