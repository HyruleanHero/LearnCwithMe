#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
  //well okay so I don't know how arrays work.... BUT THATS WHERE THE FUN COMES IN!
  //Just going with a single word to start.
  
  char *animalnames[] = {
    "Monkey", "Giraffe", "Gorilla", "Dog", "Cat", "Crow", "Cow", "TwitchLurker"
  };
  
  //I have recently learned that these *str[] "arrays of strings" are exactly that... 2 dimensional
  //here I will do some tests to see if I can take an array of strings and print them out PROPER
  //I also learned how to properly utilize sizeof as well
  
  printf("The size of animalnames is %d\n", sizeof(animalnames)/4);
  /* 
Well maybe not quite but I have the gist of what's happening now... 
This code above will give me the number of strings in my array animalnames[]
sizeof(animalnames)/4  
*/
  
  int i, j;
  int anim = sizeof(animalnames)/4;
  for ( i = 0; i < anim; i++){
    printf("animalname[%d] is %s, ", i, animalnames[i]);
    printf("and has %d characters! ", strlen(animalnames[i]));
    //nested for-loop action
    int upb = strlen(animalnames[i]);
    char *subanimal = animalnames[i];
    for ( j = 0; j < upb; j++){
      printf("%c", subanimal[j]);
      printf(" ");
    };
    printf("\n");
	   };
  
  
  return 0;
}
