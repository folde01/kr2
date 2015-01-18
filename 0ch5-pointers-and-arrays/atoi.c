#include <stdio.h>

/* atoi: convert s to integer */
int atoi(char s[])
{ 
  int i, n;
  n = 0;
  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
    n = 10 * n + (s[i] - '0');
  return n;
}

int atoi2(char *s) { 
  int n = 0;
  while(*s >= '0' && *s <= '9') 
    n = 10 * n + (*s++ - '0'); 
  return n;
}

void askfortext(char *msg, char *s, int lim) { 
  printf("%s", msg);
  int c;
  char *p = s;
  while (s-p < lim && (c = getchar()) != EOF && c != '\n') { 
    *s++ = c; 
  }
  if (c == '\n') { 
    *s++ = c;
  }
  *s = '\0';
}

char *askfortext_p(char *msg, int lim) { 
  printf("%s", msg);
  int c;
  char *s;
  char *p;
  s = p;
  while (s-p < lim && (c = getchar()) != EOF && c != '\n') { 
    *s++ = c; 
  }
  if (c == '\n') { 
    *s++ = c;
  }
  *s = '\0';
  return p;
}

main() { 
  char msg[] = "Enter a string of digits: \n";
  int lim = 50;

  char s[lim];
  askfortext(msg, s, lim);
  printf("s: %s\n", s);

  char *s2;
  s2 = askfortext_p(msg, lim);
  printf("s2: %s\n", s2);
}
