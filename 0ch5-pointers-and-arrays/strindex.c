#include <stdio.h>

/* strindex: return index of t in s, -1 if none */
int strindex(char s[], char t[])
{ 
  int i, j, k;
  for (i = 0; s[i] != '\0'; i++) { 
    for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++)
      ;
      if (k > 0 && t[k] == '\0')
        return i;
  }
  return -1;
}

int strindex_p(char *s, char *t) { 
  char *s0 = s;
  char *t0 = t;
  while (*s++) { 
    while( 
  }
}

main()
{ 
  // test 1
  char s1[] = "taxi";
  char t1[] = "tax";
  printf("0 ... %d\n", strindex(s1, t1));
}
