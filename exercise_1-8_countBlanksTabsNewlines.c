#include <stdio.h>

#define BLANK ' ' 
#define NEWLINE '\n' 
#define TAB '\t' 

main() {
double blanks = 0;
double newlines = 0;
double tabs = 0;

int c;

while ((c = getchar()) != EOF)
{
  if (c == BLANK)
    ++blanks;
  else if (c == NEWLINE)
    ++newlines;
  else if (c == TAB)
    ++tabs;  
} 

printf("blanks: %.0f\n", blanks);
printf("tabs: %.0f\n", tabs);
printf("newlines: %.0f\n", newlines);
}
