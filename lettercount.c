./a.ou # include <stdio.h>
# include <string.h>
int main(void) {
  char sentence[20];
  int number_of_letters = 0;
  printf("Enter a sentence: ");
  scanf("%s", sentence);
  for (int i=0; i<strlen(sentence); i++)
    if (sentence[i] !=  ' ')
      number_of_letters++;
  printf("\nThe number of letters in the given sentence are : %d\n", number_of_letters);
  return 0;
}
~/19ECB132-2$ gcc lettercount.c
~/19ECB132-2$ ./a.out
Enter a sentence: number of letters 

The number of letters in the given sentence are : 6