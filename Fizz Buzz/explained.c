#include <stdio.h>

/*
STRATEGY:
for every number from 1 to 100:
  print FizzBuzz if multiple of 3 AND a multiple of 5
  print Fizz if only a multiple of 3
  print Buzz if only a multiple of 5
  print the number itself if not a multiple of 3 and not a multiple of 5
*/

int main(int argc, char* argv[]){
	for(int i = 1; i <= 100; i += 1){
		if(i%3 == 0){
			if(i%5 == 0){
    			printf("FizzBuzz\n");
    		} else {
    			printf("Fizz\n");
    		}
		} else {
			if(i%5 == 0){
    			printf("Buzz\n");
    		} else {
    			printf("%i\n", i);
    		}
		}
	}
	return 0;
}
