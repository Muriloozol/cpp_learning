#include <iostream>
#include <string.h>
#define log(x); cout << x << endl

using namespace std;

struct car {
	char model[50];
	int year;
	char color[20];
	int power;
};

typedef struct person {
	char name[100];
	int age;
}t_person;

int main(){

	// Declarating mycar
	struct car mycar;

	strcpy(mycar.model, "Laborghini");
	mycar.year  = 2020;
	strcpy(mycar.color, "Wine");
	mycar.power = 500;

	log(mycar.model);
	log(mycar.year );
	log(mycar.color);
	log(mycar.power);

	// Declaration when typedef is used
	t_person p1;

	strcpy(p1.name, "Juao");
	p1.age = 21;

	log(p1.name);
	log(p1.age);

	// Using pointers
	t_person* pp;
	pp = &p1;

	pp->age = 26;
	log(pp->age);

	return 0;
}
