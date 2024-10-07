#include <iostream>
#include <cstring>
using namespace std;

/* input a, b, op
(1)	if op == '+':
		(a) output a+b
	else if op == '-':
		(a) output a+b
	else if op == '*':
		(a) output a+b
	else if op == '/':
		(a) output a+b
	else:
		(a) output "Not a valid operator"
end
*/

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
		cout << "Not a valid operator" << endl;
	}
	
	return 0;
}
