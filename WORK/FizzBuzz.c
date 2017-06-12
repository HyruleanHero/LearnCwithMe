#include <stdio.h>
int main(int argc, char *argv[])
{
  //main guidelines of fizzbuzz
  //divisible by 3 = fizz
  //divisible by 5 = buzz
  //divisible by 15 = fizzbuzz
  //if not divisible by these then print the number
  /*the way modulo works is a number is divisible
    if the remainder is 0 "good enough explanation for this program*/
 int i = 0;
 int n;
 printf("how many fizzes will we buzz today?\n");
 scanf("%d", &n);
  for(i; i <= n; i++)
    if(/*mod3 op*/i % 3 == 0)
      {printf("Fizz\t");}
        else if(/*mod5 op*/i % 5 == 0)
	  {printf("Buzz\t");}
	   else if(/*mod15 op*/i % 15 == 0)
	     {printf("FizzBuzz\t");}
	 else/*self explanatory?*/
	       {
		 printf("%d\t", i);
	       }
 
  return 0;
}
