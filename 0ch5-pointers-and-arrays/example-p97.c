#include <ctype.h>
#include <stdio.h>

int getch(void);
void ungetch(int);
int SIZE = 10;

main() { 
  int n, array[SIZE], getint(int *);

  for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++)
    ;
  for (n = 0; n < SIZE; n++)
    printf("%d ", array[n]); 

}

int getint(int *pn) { 
  *pn = 1;
  return 1;
}

/*
int getint(int *pn) { 
  int c, sign;

  while (isspace(c = getch()))
    ;
  if (!isdigit(c) && c != EOF && c != '+' && c != '-')

}
*/
