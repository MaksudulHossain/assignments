#include <iostream>
using namespace std;

/* 	input a, b
(1)	if a>b:
		(a) output a
	else:
		(b) output b
	end
*/

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



