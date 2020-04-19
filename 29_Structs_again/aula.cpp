#include <iostream>

using namespace std;

struct Person{
private:
	int age;
public:
	char name;
	int luckyNumber;

	// Constructor
	Person(int age){
		this->age=age;
	}

	// Other constructor
	Person(int age, int luckyNumber){
		this->age = age;
		this->luckyNumber = luckyNumber;
	}

	// Using just a prototype
	Person(char name);

	void setAge(int age){
		this->age = age;
	}

	int getAge(){
		return this->age;
	}

};

Person::Person(char name){
	this->name = name;
}

int main(){
	Person p(20);
	Person p2(20, 22);
	Person p3('a');

	p.setAge(15);

	cout << p.getAge() << endl;
	cout << p2.luckyNumber << endl;
	cout << p3.name << endl;
	return 0;
}
