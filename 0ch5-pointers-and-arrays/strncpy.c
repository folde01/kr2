#include <stdio.h>
#include <string.h>


/* copy at most n characters of string ct to s ; return s . Pad with '\0' characters if ct has fewer than n characters. */
char *strncpy2(s, ct, n);

char *strncpy2(s, ct, n) { 
  while (*s++ = *ct++ && n-- > 0)
    ;
  while (*ct++)
    *s++ = '\0'
  }

}


main() { 
  char s[] = "abcd";
  char ct[] = "efg";
  int n = 2; 
  printf("efcd ? %s\n", strncpy(s, ct, n));

  char s2[] = "abcdef";
  char ct2[] = "hi";
  int n2 = 4; 
  char *res = strncpy(s2, ct2, n2);
  printf("hi???? ? %s\n", res);

  while (*res) { 
    printf("res: %d\n", res);
    ++res;
  }
}

