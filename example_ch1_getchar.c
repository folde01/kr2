#include <stdio.h>

main()
{
  int c;

  int result = ((c = getchar()) != EOF);

  printf("result: %d\n", result);
  if ( result == 1 || result == 0 ) {
    printf("true\n");
  } else { 
    printf("false\n");
  }
  
/*
  printf("Press enter: ");
  printf("EOF value: %d\n", getchar());

  char value = -1;
  
  while (value) {
    value = ((c = getchar()) != EOF);
    printf("Value of '(c = getchar()) != EOF': %d\n", value);
     
  } 


  while ((c = getchar()) != EOF) {
    putchar(c);
  }
*/

}
