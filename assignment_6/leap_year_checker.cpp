#include <iostream>
using namespace std;

/* 	input year
	(1)	if year%100==0:
			if year%400==0:
				(a) output "Leap Year"
			else:
				(a) output "Not a leap year"
		else:
			if year%4==0:
				(a) output "Leap year"
			else:
				(a) output "Not a leap year"
		end
*/
	
int main(){
	int year;
	
	cout << "Enter a year: " << endl;
	cin >> year;
	
	if (year%100==0){
		if (year%400==0){
			cout << "Leap Year" << endl;
		}
		else{
			cout << "Not a Leap Year" <<endl;
		}
		
	}
	else{
		if (year % 4 == 0){
			cout << "Leap Year" << endl;
		}
		else{
			cout << "Not a Leap Year" << endl;
		}
	}
	
	return 0;
}

