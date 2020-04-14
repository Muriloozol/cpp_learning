#include <iostream>

using namespace std;

int main(){
	/*
	for(part_1; part_2; part_3){}

	part_1: Executed just one time at the beggining	
	part_2: Condition
	part_3: Make an operation
	*/
	int i, j;
	for(i = 0, j = 0; i<10; i++, j++){
		cout << i << "\t" << j << endl;
	}
	return 0;
}
