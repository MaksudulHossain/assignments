# The basic concepts of programming are:

- Input/Output
- Variables
- Conditionals
- Loops
- Functions

## For these to b implemented in C++
### Input/Output
Although in C++ input and output are handled using `<iostream>` library, we will be using pure C syntax here initially. Therefore, we will use the `<stdio.h>` header file so that we can call `printf` and `scanf` functions to handle output and input respectively.

`scanf` reads user input from the console and stores it in a variable, while `printf` outputs data to the console. It can be formatted to handle different data types, such as integers, strings, characters, and floats. The formatting specifier will change accordingly. For example, `%d` refers to an integer, while `%f` represents a float.

```cpp
#include <stdio.h>

int main(){
    //output
    printf("Hello world");
    int num;

    //input
    scanf("%d", &num);
    printf("num  %d", num);
    
    return 0;
}
```

### Variables
In C++ variables store data of different types e.g., `int`, `float`, `char`, `double` etc. 
A variable must be declared with type before assiging any value. This determines what type of data it can hold. Therefore C++ is statically typed unlike python which is dynamically typed. The type of variable cannot chnage duruing program's execution.
```cpp
#include <stdio.h>

int main(){
    //int type varible
    int num;        
    scanf("%d", &num);
    printf("num  %d", num);
    
    return 0;
}
```

### Conditionals
Conditions are great to make decision and branchinh in a program. `if-else if-else` allows the code to execute specific blocks based on the evaluation of the boolean condition.

- `if` checks whether a condition is true and executes that codeblock that follows
- `else if` checks additional condition if the first `if` condition evaluated to False and run the corresponding block of code
- `else` executes if none of the above condition is `True`.

```cpp
#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ")
    scanf("%d", &num);

    //conditionals
    if (num % 2 == 0){
        printf("%d is even.", num);
    }
    else if (num%2 != 0){
        printf("%d is odd.", num);
    }
    else{
        printf("Not a number.")
    }
    return 0;
}
```

### Loops
Loops are used to execute a block of code repeatedly until a condition evaluates to `False`. `for` loops and `while` loops are the most popular ones.

- `for` loop: Used to iterate over a sequence of values. It has three components:
  - Initialization
  - Condition
  - Increment/Decrement

- `while` loop: Repeats a block of code as long as the condition is `True`.

A `for` loop is ideal when the number of iterations is known beforehand, e.g., finding the sum of the first 10 numbers. On the other hand, a `while` loop is best suited for scenarios where the number of iterations is not known in advance, such as waiting for user input, reading the contents of a file, or running a game until the user enters "quit".


```cpp
#include <stdio.h>

int main(){
    int count;
    printf("How many loops: ");
    scanf("%d", &count);
    
    // for-loop
    for(int i=0; i<count; i++){
        printf("%d", i);
    }

    int i = 0;
    
    //while-loop
    while (i<count){
        printf("%d", i);
        i++;
    }
    
    return 0;
}
```

### Functions
In C++, a function is defined with a return type, a name, a parameter list(optional) and the body. 
FUnction can return values, transorm the input and can be called multiple time from the main code. 
In C++ we can have standard library function like main(), user-defined function like is_even() or memeber function in class which will be discussed in Object Oriented Programming (OOP).
Functions are used to avoid code repetation.


In C++, a function is defined with a return type, a name, an optional parameter list, and the body.

Functions can return values, transform the input, and be called multiple times from the main code.

In C++, we can have:
- Standard library functions like `main()`
- User-defined functions like `is_even()`
- Member functions in classes, which will be discussed in Object-Oriented Programming (OOP).

Functions are used to avoid code repetition. A repetitive code blocks is packaged ina function to use multiple times. Parametrized function allows for easier debug, correcting in the function definition is sufficient. 

```cpp
#include <stdio.h>

// function definition
int is_even(int num){
    if (num%2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int num;
    scanf("%d", &num);

    // function call
    int isEven = is_even(num);

    if (isEven){
        printf("%d is an even number", num);
    } 
    else{
        printf("%d is an odd number.", num);
    }
    
    return 0;
}
```

## For these to b implemented in Python
### Input/Output
Python uses `input()` to take input and `print()` for output
`input()` always takes string input. So to deal with numbers, we should convert to appropriate type (`int`/`float`) first.

```python
print("Hello world")
# input
num = int(input("Enter a number: "))

# output
print("num = ", num)
print(f"num = {num}")
```

### Variables
Python variables are dynamically typed. It means we don't have to decrale the data type of a variable. Variable does not have a type, the object it binds to has a type. We will learn how variable assignment work under the hood in later tutorials. 
The variable can chnage during execution. Same variable pointing to a string can oint an integer later on.

Python variables are *dynamically typed*, meaning we don't have to declare the data type of a variable. The variable itself does not have a type; rather, the object it binds to has a type.

We will learn how variable assignment works under the hood in later tutorials.

A variable can change during execution. For example, a variable initially pointing to a string can later point to an integer.

```python
num = int(input("Enter a number: "))
print("num", num)
```

### Conditionals
python conditions is almost similar to C++. Instead of else if, it used elif. No {} is required in Python, the code blocks is distinguished with forced indentation. In C++, indentation are not required, only to incraese readability, in python indentation is forced.
```python
num = int(input("Enter a number: "))

# conditions
if num % 2 == 0:
    print(f"{num} is even.")
elif num % 2 != 0:
    print(f"{num} is odd.")
else:
    print("Not a number.")
```

### Loops
for loop can iterate over a sequence (`list`, `tuple` etc. - generally called iterator. We will cover iterator later).
```python
count = 5

#for-loop
for i in range(count):
    print(i)

# while loop
i = 0
while i<count:
    print(i)
    i += 1
```

### Function
Python functions are defined with `def` keyword. It does not require any return type. 
```python
#function defintion
def is_even(num):
    if num%2==0:
        return True
    else:
        return False 

num = int(input("Enter a number: "))
is_even = is_even(num)

if is_even:
    print(f"{num} is an even number.")
else:
    print(f"{num} is an odd number.")
```

## For these to b implemented in Javascript
### Input/Output
JavaScript uses `prompt()` for input and `console.log()` for output. `parseInt()` converts the input to integer. 
```javascript
console.log("Hello world");

//input
let num =  parseInt(prompt("Enter a number: "));

//output
console.log(num)
```

### Variables
Variables are similar to Python with dynamic typing. 
```javascript
// declare a variable and assign
let name;
name = "Jason";
let age = 10; 
let arr = [1, "John", "Steve", 100];
```

### Conditionals
Similar to C++ syntax and keywors. It uses `if`, `else if`, `else` and curly braces {} for code blocks.
```javascript
let number = 100;

//conditionals
if (number % 2 == 0){
    console.log(number + " is even.")
} else if (number%2 != 0){
    console.log(number + " is odd.")
} esle {
    console.log("Not a number.")
}
```

### Loops
Similar to C++ `for` loop and `while` loop. 
```javascript
let count = 5;
//for-loop
for (let i=0; i<count; i++) {
    console.log(i);
}

//while loop
let i = 0;
while(i<count){
    console.log(i);
    i++;
}

```

### Functions
Uses `function` keyword. Similar to Python since it does not need to declare any return type. 
```javascript
//function definition
function is_even(num) {
    if (num % 2 === 0){
        return true;
    } else{
        return false;
    }
}

//function call
let num = parseInt(prompt("Enter a number: "));

let isEven = is_even(num);

if (isEven){
    console.log(num + " is an even number.")
} else{
    console.log(num + " is an odd number.")
}
```