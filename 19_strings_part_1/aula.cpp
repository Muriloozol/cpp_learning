#include <iostream>

using namespace std;

int main(){
	
	char n[] = "Murilo";
	cout << n << endl;
	
	char name[15] = {'m', 'u', 'r', 'i', 'l', 'o'};
	cout << name << endl;

	for(int i=0; name[i]; i++)
		cout << name[i] << endl;
	return 0;

}
