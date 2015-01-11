#include <stdio.h>


/* getline2: read a line into s, return length */
int getline2(char s[],int lim)
{ 

  int c, i;
  for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
    if (c == '\n') { 

      s[i] = c;
      ++i;
    }
    s[i] = '\0';
    return i;
}

int getline3(char *, int);

int getline3(char *s, int lim) { 
  int c;
  char *p = s;
  while (s-p < lim && (c = getchar()) != EOF && c != '\n') { 
    *s++ = c; 
  }
  if (c == '\n') { 
    *s++ = c;
  }
  *s = '\0';
  return s-p;
}

main() { 
  int lim = 50;
  char s[lim];
  printf("Enter a line of text: \n");
  int len = getline2(s, lim);
  printf("Line was %d characters.\n", len);

  int lim2 = 50;
  char s2[lim];
  printf("Enter a line of text: \n");
  int len2 = getline3(s2, lim2);
  printf("Line was %d characters.\n", len2);
}
