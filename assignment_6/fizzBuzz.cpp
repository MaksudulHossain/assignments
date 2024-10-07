#include <iostream>
using namespace std;

/* for number=1 to 50 step 1 do
	if number%3==0 and number%5==0:
		(a) output "FizzBuzz"
	else if number%3 == 0:
		(a) output "Fizz"
	else if number%5==0:
		(a) output "Buzz"
	else:
		(a) output number 
end
*/

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
