// concatenate at most n characters of string ct to string s , terminate s with '\0' ; return s .
#include <stdio.h>
#include <string.h>

char *strncat2(char *s, char *ct, int n);

char *strncat2(char *s, char *ct, int n) { 
  char *p = s;
  /*
  while (*s) { 
    printf("yoda: %s\n", s);
    s++;
  }
  */
  s += strlen(s);
  int i = 0;
  while (*ct && i < n) { 
    printf("hamish: %s\n", s);
    ++i;
    *s++ = *ct++;
  }
  *s = '\0';

  return p;
}

main() { 
  char s1[4] = "abc";
  char ct1[3] = "de";
  int n1 = 2;
  printf("abcde ? %s\n", strncat(s1, ct1, n1));   

  char s2[44] = "abc";
  char ct2[3] = "def";
  int n2 = 3;
  printf("abcde ? %s\n", strncat2(s2, ct2, n2));   // is it null terminating? How to test for this? Check each char?
}
