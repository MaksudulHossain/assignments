// Maximum of Two Numbers
// Problem: Write a program that takes two values as input and returns the greater of the two.
// Example: Input: 5, 10 -> Output: 10

#include <iostream>
using namespace std;

int main(){
	int num1, num2;
	cout << "Enter 2 numbers: " << endl;
	cin >> num1 >> num2;
	
	if (num1>num2){
		cout << num1 <<endl;
	}
	
	else{
		cout << num2 << endl;
	}
	return 0;
}



