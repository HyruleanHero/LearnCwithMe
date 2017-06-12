#include <stdio.h>
int main(int argc, char *argv[])
{
  //Pondering what to do with arrays...
  //well okay so I don't know how arrays work.... BUT THATS WHERE THE FUN COMES IN!
  //Just going with a single word to start.
  char *animalnames[] = {"Monkey", "Giraffe", "Gorilla", "Dog", "Cat", "Crow", "Cow", "TwitchLurker"};
  int i = 0;
  int n = 1;
  //alright so we are going to try the sizeof() method on the entire array animalnames[]
  //printf("%d\n", sizeof(animalnames));
  for (i; i < 8; i++) {
    printf("%d.\t%s\n", n, animalnames[i]);
    n++;
  }
  return 0;
}
