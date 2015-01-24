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
  char *s0;
  char *t0;
  while (*s++ != '\0') { 
    s0 = s; 
    t0 = t;
    while (*s0 == *t0) { 
      printf("yoda\n");
      ++s0, ++t0;
    }
    if (*t0 == '\0' && t0 > t)
      return s0-s;
  }
  return -1;
}

main()
{ 
  // test 1
  char s1[] = "taxi";
  char t1[] = "tax";
  printf("0 ... %d\n", strindex(s1, t1));

  // test 2
  char *s2 = "taxi";
  char *t2 = "ax";
  printf("1 ... %d\n", strindex_p(s2, t2));

  // test 3
  char *s3 = "abcdefg";
  char *t3 = "def";
  printf("3 ... %d\n", strindex_p(s3, t3));

  // test 4
  char *s4 = "abcdefg";
  char *t4 = "e";
  printf("4 ... %d\n", strindex_p(s4, t4));
}
