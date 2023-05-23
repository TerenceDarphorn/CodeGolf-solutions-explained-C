// (no need to include stdio.h)
int main(){ //(no arguments needed)
for(int i=1;i<101;i+=1){ // i < 101 is equal to i <= 100 (for integers at least)
if(i%15==0)printf("FizzBuzz\n"); // if i is a multiple of 3 and a multiple of 5, it must be a multiple of 15 and checking for that is shorter
else if(i%3==0)printf("Fizz\n"); // when there is only one statement in the if (or else), the braces {} can be omitted.
else if(i % 5 == 0)printf("Buzz\n");
else printf("%i\n",i);
} //end of for loop
//(no need to return)
} //end of main
