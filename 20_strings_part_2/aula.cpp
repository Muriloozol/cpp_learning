#include <iostream>
#include <string.h>

using namespace std;

void invert(char name[]);

int main(){

	char myName[] = "Murilo";

	invert(myName);

	/*
	Other functions avalible on string.h
	------------------------------------
	isdigit()
	isupper()
	islower()
	isspace()
	strcmp()	->	Compare 2 strings
	
	tolower()
	toupper()

	strcat()	->	Concatenate strings
	
	
	*/
	if(isalpha(myName[0]))
		cout << "First charcter is alphabetic" << endl;
	else
		cout << "First charcter isn't alphabetic" << endl;
	

	return 0;
}

void invert(char name[]){

	int lenght = strlen(name);
	cout << lenght << endl;
}
