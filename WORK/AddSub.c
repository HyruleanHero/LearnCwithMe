#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 int main(int argc, char *argv[])
 {
   /*
   ** either problem var can be anywhere from 0 to 1,000,000
     1 var for if its sub or add called AddSub
     2 var for the first number in prob num1
     3 for the second problem component num2
     4 var for the correct answer ans
     5 input var for user input guess
   */
   int AddSub, num1, num2, ans, guess;
   time_t t;

   //init rngenerator and an int AddSub to see if I can rand to 0 or 1
   srand((unsigned) time(&t));
   AddSub = rand() % 2;

   if(AddSub == 1)
     {
       //if 1 then addition else subtraction
       int num1 = rand() % 1000001;
       int num2 = rand() % 1000001;
       int ans = num1 + num2;
       //may not need this printf depending on how fscanf works... shrugs
       printf("%d + %d = \n", num1, num2);
       scanf("%d", &guess);
       if(ans != guess)
	 {
	   printf("Incorrect answer! The correct answer was %d\n.You entered %d.\n", ans, guess);
	 }
       
       else
	 {
	   printf("You've done it! Congratulations!\n");

	 }
     }

     else
         {
           //if anything other than AddSub == 1 then we're doing subtraction instead
          int num1 = rand() % 1000001;
          int num2 = rand() % 1000001;

	  /* this if:else is to eliminate the possibility of negative integers a workaroud
	    for a couple reasons... the first being I have no idea how to scan for negative ints
	    and also this is for a 2nd grader.
	    now all of that being said as soon as I can scan negative ints I'm adding that
	    functionality */
	  if(num1 > num2)
	    {
          ans = num1 - num2;
          printf("%d - %d = \n", num1, num2);
	    }
	  
	  else
	    {
	      ans = num2 - num1;
	      printf("%d - %d = \n", num2, num1);
	    }
	  
	  scanf("%d", &guess);

	  if(ans != guess)
	    {
	      printf("Incorrect answer! The correct answer was %d.\nYou entered %d.\n", ans, guess);
	    }
	  else
	    {
	      printf("You've done it! Congratulations!\n");
	    }
	 }
   
   return 0;
   
 }
