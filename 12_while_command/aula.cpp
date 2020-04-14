#include <iostream>

using namespace std;

# Print every pair positive number under 50 three times
int main(){

	int n =1;
	while(n <= 100){
		
		// Get out the loop when n is equal to 50
		if(n==50){
			break;
		}
		// Ignore the odds
		if(n % 2 != 0){
			n++;
			continue;
		}

		// Print three times each number
		int i = 0;
		while(i < 3){
			cout << n << endl;
			i++;
		}
		n++;
	};

	return 0;
}
