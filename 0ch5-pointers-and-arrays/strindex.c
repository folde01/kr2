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
  char *s_start = s;
  char *t_start = t;
  char *s0;
  char *t0;
  while (*s != '\0') { 
    s0 = s; 
    t0 = t;
    while (*s0 == *t0 && *s0 != '\0') { 
      printf("yoda\n");
      ++s0, ++t0;
    }
    if (*t0 == '\0' && t0 > t) { 
      printf("match\n");
      return s-s_start;
    }
    ++s;
  }
  return -1;
}

main()
{ 
  printf("TEST 1\n");
  char s1[] = "taxi";
  char t1[] = "tax";
  printf("0 ... %d\n", strindex(s1, t1));

  printf("TEST 2\n");
  char *s2 = "taxi";
  char *t2 = "ax";
  printf("1 ... %d\n", strindex_p(s2, t2));

  printf("TEST 3\n");
  char *s3 = "abcdefg";
  char *t3 = "def";
  printf("3 ... %d\n", strindex_p(s3, t3));

  printf("TEST 4\n");
  char *s4 = "abcdefg";
  char *t4 = "e";
  printf("4 ... %d\n", strindex_p(s4, t4));

  printf("TEST 5\n");
  char *s5 = "abcdefg";
  char *t5 = "fg";
  printf("5 ... %d\n", strindex_p(s5, t5));

  printf("TEST 6\n");
  char *s6 = "a";
  char *t6 = "a";
  printf("0 ... %d\n", strindex_p(s6, t6));

  printf("TEST 7\n");
  char *s7 = "a";
  char *t7 = "b";
  printf("-1 ... %d\n", strindex_p(s7, t7));

  printf("TEST 8\n");
  char *s8 = "ab";
  char *t8 = "b";
  printf("1 ... %d\n", strindex_p(s8, t8));
}
