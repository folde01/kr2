#include <stdio.h>
#include <string.h>


/* reverse: reverse string s in place */
void reverse(char s[])
{ 

  int c, i, j;
  for (i = 0, j = strlen(s)-1; i < j; i++, j--) { 
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
}

/* itoa: convert n to characters in s */
void itoa(int n, char s[])
{ 
  int i, sign;
  if ((sign = n) < 0) /* record sign */
    n = -n;
  /* make n positive */
  i = 0;
  do { 
    /* generate digits in reverse order */
    s[i++] = n % 10 + '0'; /* get next digit */
  } while ((n /= 10) > 0);
  /* delete it */
  if (sign < 0)
    s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}




void itoa2(int n, char s[]) { 
  char *p = s;
  do { 
    s* =  
  } while (n /= 10 > 0)
  reverse_p(p);
}

void main() { 
  // test 1:
  int lim = 10;
  char s[lim];
  int n = 123;
  itoa(n, s);
  printf("itoa: %s\n", s);

  // test 2:
  char s[lim];
  int n2 = 1234;
  itoa2(n2, s2);
  printf("itoa2: %s\n", s2);
}
