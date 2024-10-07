
#include <iostream>
using namespace std;

/* 	input = num
(1)	if (num%2==0):
		(a) output "Even"
	else:
		(a) output "Odd"
	end
*/
	
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


