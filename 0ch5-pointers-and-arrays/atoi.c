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

char *askfortext(int lim, char *msg) { 
  printf("%s", msg);
  //char s[lim];
  char *s;
  printf("s: %d\n", s);
  int c, i;
  for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {  // BUG: lim is useless here
    //s[i] = c;
    *s = c;
    s++;
  printf("s: %d\n", s);
  }
  if (c == '\n') { 
    //s[i++] = c;
    *s = c;
    s++;
  }
  //s[i] = '\0';
  *s = '\0';
  return s;
}

main() { 
  char msg[] = "Enter a string of digits: \n";
  int lim = 50;
  char *s;
  s = askfortext(lim, msg);
  printf("s: %s\n", s);
}
