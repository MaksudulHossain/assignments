// Simple Calculator
// Problem: Write a program that takes three inputs: two values and an operator (like +, -, *, /). The program should perform the corresponding arithmetic operation on the values and return the result.
// Example: Input: 8, 4, "+" -> Output: 12

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int num1, num2;
	string op;
	
	cout << "Enter 3 inputs: two values and an operator (like +, -, *, /)." << endl;
	cin >> num1 >> num2 >> op;
	
	if(op=="+"){
		cout << num1+num2 << endl;
	}
	else if(op=="-"){
		cout << num1-num2 << endl;
	}
	else if(op=="*"){
		cout << num1*num2 << endl;
	}
	else if(op=="/"){
		cout << num1/num2 << endl;
	}
	else{
		cout << "Invalid input." << endl;
	}
	
	return 0;
}
