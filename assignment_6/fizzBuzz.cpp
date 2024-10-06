// FizzBuzz
// Problem: Write a program that returns the numbers from 1 to 50. For multiples of three, return "Fizz" instead of the number, and for multiples of five, return "Buzz". For numbers that are multiples of both three and five, return "FizzBuzz".
// Example: 1, 2, Fizz, 4, Buzz, Fizz, 7, 8, Fizz, Buzz, 11, Fizz, 13, 14, FizzBuzz,...

#include <iostream>
using namespace std;

int main(){
	
	for(int i=1; i<=50; i++){
		if (i%3==0 && i%5==0){
			cout << "FizzBuzz, ";
		}
		else if(i%3==0){
			cout << "Fizz, ";
		}
		else if(i%5==0){
			cout << "Buzz, ";
		}
		else{
			cout << i << ", ";
		}
		
	}
	
	return 0;
}
