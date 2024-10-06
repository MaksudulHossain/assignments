// Leap Year Checker
// Problem: Write a program that takes a year as input and returns whether it is a leap year. A leap year is divisible by 4, but not by 100 unless it is also divisible by 400.
// Example: Input: 2020 -> Output: "Leap Year" | Input: 1900 -> Output: "Not a Leap Year"

#include <iostream>
using namespace std;

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

