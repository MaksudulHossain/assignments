// Homework Problems:
// Even or Odd
// Problem: Write a program that takes a single value as input and returns whether it is "Even" or "Odd".
// Example: Input: 7 -> Output: "Odd" | Input: 8 -> Output: "Even"

#include <iostream>
using namespace std;

int main(){
	int num;
	cout << "Enter a number: " << endl;
	cin >> num;
	
	if (num%2==0){
		cout << "Even" <<endl;
	}
	
	else{
		cout << "Odd" << endl;
	}
	return 0;
}


