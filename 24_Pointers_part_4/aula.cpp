#include <iostream>

using namespace std;

int my_strlen(char* str){
	int size = 0;

	for(; *str != '\0'; str++)
		size++;
	
	return size;
}

char* my_strcat(char* str1, char* str2){

	int len_str1, len_str2;

	len_str1 = my_strlen(str1);
	len_str2 = my_strlen(str2);

	int total_len = len_str1 + len_str2;

	char* str_result = new char[total_len];

	for(; *str1 != '\0'; str1++)
		*str_result++ = *str1;
	
	for(; *str2 != '\0'; str2++)
		*str_result++ = *str2;

	return (str_result-total_len);
}

int main(){
	char name[] = "Murilo muniz ozol";
	cout << my_strlen(name) << endl;
	
	char* s1 = new char[100];
	char* s2 = new char[100];

	cout << "Digite algo: " << endl;
	cin >> s1;
	cout << "Digite algo diferente: " << endl;
	cin >> s2;

	cout << "Concatenado: " << my_strcat(s1, s2) << endl;
	return 0;
}
