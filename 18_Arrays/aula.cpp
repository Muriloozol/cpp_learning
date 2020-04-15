#include <iostream>

using namespace std;

int main(){

	int array1[50];
	int array2[] = {20, 15, 10, 5};
	char array3[5];
	
	cout << "Bytes allocated to array1:\t" <<  sizeof(array1) << endl;
	cout << "Bytes allocated to array2:\t" <<  sizeof(array2) << endl;
	cout << "Bytes allocated to array3:\t" <<  sizeof(array3) << endl;
	
	for(int i = 0; i < 50; i++){
		array1[i] = i+1;
		cout << array1[i] << endl;
	}

	return 0;
}
