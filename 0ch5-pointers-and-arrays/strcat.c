#include <stdio.h>
#include <string.h>


/* strcat: concatenate t to end of s; s must be big enough */
void strcat2(char s[], char t[])
{ 

  int i, j;
  i = j = 0;
  while (s[i] != '\0') /* find end of s */
    i++;
    while ((s[i++] = t[j++]) != '\0') /* copy t */
      ;
}

main() { 
  char s[] = "abc";
  char t[] = "defg";
  strcat(s, t);
  printf("%s\n", s);
}
