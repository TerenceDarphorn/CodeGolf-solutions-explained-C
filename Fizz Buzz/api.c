#include <stdio.h>
#include <stdbool.h> // for bool, true and false. A bool is a variable which can essentially hold 0 and 1 only. true = 1, false = 0.

/*
Check if `i` is a multiple of `n`.
If `i` is a multiple of `n`, true(1) is returned.
else, if `i` is not a multiple of `n`, false(0) will be returned.
*/
bool is_multiple_of(int i, int n){
  int remainder = i % n; // remainder of i devided by n
  if(remainder == 0){
    return true; // yes, i is a multiple of n
  } else {
    return false; // no, i is no multiple of n
  }
}

void fizzbuzz_value(int i, char* buffer){
   if(is_multiple_of(i, 3) && is_multiple_of(i, 5)){ // multiple of 3 and 5
			printf("FizzBuzz\n");
		} else if(is_multiple_of(i, 3)){ // multiple of 3
    	printf("Fizz\n");
		} else if(is_multiple_of(i, 5)){ // multiple of 5
    	printf("Buzz\n");
    } else { // no multiple of 3 or 5
    	printf("%i\n", i);
		}
}

void print_fizzbuzz_until(int end){
  for(int i = 1; i <= end; i += 1){ // loop from 1 until end. Will be executed <end> times
    char buffer[16]; // string (array of characters) variable to contain the fizzbuzz value. Can contain max 15 characters, because a string must and with a null terminator.
    fizzbuzz_value(i, buffer) // save the fizzbuzz value of i in the buffer
    printf("%s\n", buffer); // print the fizzbuzz value (FizzBuzz, Fizz, Buzz, or the number) and append a newline. %s means: print the next argument, which should be a string.
	}
}

/* You can use this for the program
int main(int argc, char* argv[]){
	print_fizzbuzz_until(100);
	return 0; //success
}*/
