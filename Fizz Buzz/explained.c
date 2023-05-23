/*
STRATEGY:
for every number from 1 to 100:
  print FizzBuzz if multiple of 3 AND a multiple of 5
  print Fizz if only a multiple of 3
  print Buzz if only a multiple of 5
  print the number itself if not a multiple of 3 and not a multiple of 5

How to check for a multiple of n?
To check if i is a multiple of n, we first look at the remainder.
i % n calculates the remainder in C.
Here are some caluculations with i % 3:
 -  0 % 3 = 0
 -  1 % 3 = 1
 -  2 % 3 = 2
 -  3 % 3 = 0
 -  4 % 3 = 1
 -  5 % 3 = 2
 -  6 % 3 = 0
 -  7 % 3 = 1
 -  8 % 3 = 2
 -  9 % 3 = 0
As you can see the answers are repeatedly 0, 1, 2, ...
And the thing is: for every multiple of 3 (0, 3, 6 and 9 above), the answer is equal to 0
This way we can check: if i % n == 0 (if the remainder of i divided by n is equal to 0), i is a multiple of n.

*/

#include <stdio.h> //defines printf

int main(int argc, char* argv[]){ //this will run
	for(int i = 1; i <= 100; i += 1){ // for every number i, starting from 1, only numbers lower or equal to 100, with i increased by 1 every step
		if(i % 3 == 0 && i % 5 == 0){ // if i (the number) is a multiple of 3 AND (&&) a multiple of 5
			printf("FizzBuzz\n"); // print FizzBuzz and a newline (without a newline the other values will be printed right after this, like: FizzBuzz1617Fizz...)
		} else if(i % 3 == 0){ //else (so not executed when it is both) if i is (only) a multiple of 3
    	printf("Fizz\n"); // print Fizz and a newline
		} else if(i % 5 == 0){ //else if i is a multiple of 5
    	printf("Buzz\n"); // print Buzz and a newline
    } else { // else (in all other situations. So i is no multiple of 3 and it is also no multiple of 5) 
    	printf("%i\n", i); // print the number and a newline. But how? "%i\n" (this is called the template) contains %i and \n. %i will print the following argument (i in our case) as a decimal number. \n will print a newline.
		}
	} //end of for loop
	return 0; //success
}
