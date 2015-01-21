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




void itoa2(int n, char *s) { 
  printf("itoa2:\n");
  char *p = s;
  int sign;
  if ((sign = n) < 0)
    n = -n;
  do { 
    *s++ = (n % 10) + '0';   
    printf("s: %d\n", s);
  } while ((n /= 10) > 0);
  if (sign < 0)
    *s++ = '-';
  *s = '\0';
  reverse(p);
}

void reverse_p(char *s) { 
  printf("s: %d\n", s);
  char *p = s;
  s += (strlen(s)-1);
  printf("s: %d\n", s);
  char c;
  printf("STA s: %d *s: %c p: %d *p: %c\n", s, *s, p, *p);
  //while (*p) { 
  while (p < s) { 
    printf("BEF s: %d *s: %c p: %d *p: %c\n", s, *s, p, *p);
    c = *p;
    *p = *s;
    *s = c;
    printf("AFT s: %d *s: %c p: %d *p: %c\n", s, *s, p, *p);
    ++p, --s;
  }
  ++s;
  printf("FIN s: %d *s: %c p: %d *p: %c\n", s, *s, p, *p);
}

void main() { 
  // test 1:
  int lim = 10;
  char s[lim];
  int n = 123;
  itoa(n, s);
  printf("itoa: %s\n", s);

  // test 2:
  char s2[lim];
  int n2 = 1234;
  itoa2(n2, s2);
  printf("itoa2: %s\n", s2);

  // test 3:
  char s3[lim];
  int n3 = 1234567890;
  itoa2(n3, s3);
  printf("itoa2: %s\n", s3);
  reverse_p(s3);
  printf("reverse_p: %s\n", s3);
}
