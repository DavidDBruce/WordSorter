#include <stdio.h>
#include <stdlib.h>
const int LENGTH = 100;
void main()
{

  char  word[LENGTH];
  char letters[LENGTH];
  int letterCount[LENGTH];
  for(int i = 0; i < LENGTH; i++)
  {
    word[i] = '\0';
    letters[i] = 0;
    letterCount[i] = 0;
  }

  int contains = 0;
  int lettersLength = 0;

  printf("Enter a word or phrase no longer than 100 characters long.\n");
  scanf ("%[^\n]%*c", word);

  for(int i = 0; i < LENGTH; i++)
  {
    for(int j = 0; j < LENGTH; j++)
    {


      if(lettersLength <= j)
      {
        break;
      }
      else if(word[i] == letters[j])
      {
        letterCount[j] += 1;
        contains = 1;
        break;
      }
    }
    if(contains == 0)
    {
      letters[lettersLength] = word[i];
      letterCount[lettersLength] = 1;
      lettersLength += 1;
    }
    contains = 0;
  }
  for(int i = 0; i < lettersLength-1; i++)
  {
    printf("%c - %d\n",letters[i],letterCount[i]);
  }
  printf("Press Enter to quit.");
  scanf ("%[^\n]%*c", word);

}
