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

char[] askfortext(int lim, *char msg) { 
  printf("%s", msg);
  char s[lim];
  int c, i;
  for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
  if (c == '\n')
    s[i++] = c;
  s[i] = '\0';
  return s;
}

main() { 
  printf("Enter a string of digits: \n");
  int lim = 50;
  char s[lim];
  int c, i;
  //while ((c=getchar())!=EOF && c!='\n' && i<lim-1)
  for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
  if (c == '\n')
    s[i++] = c;
  s[i] = '\0';

  //

  //int a = atoi(s);
  int a = atoi2(s);
  printf("a: %d\n", a);
  
}
