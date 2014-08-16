#include <stdio.h>

void prnt(char *s) { 
  printf("%s\n", s);
}

void strcpy2(char *s, char *t) { 

/*
  int i;
  i = 0;
  while ((s[i] = t[i]) != '\0') { 
    i++;
  }
    */
  while (*s++ = *t++)
    ;
}

int strcmp2(char *s, char *t) { 

  printf("strcmp2():\n");
  /* return <0 if s<t, 0 if s==t, >0 if s>t */

  int result;
  while (*s == *t) { 
    printf("s: %s, *s: %c\n", s, *s);
    //printf("%c\n", *s);
    if (*s == '\0')
      return 0;
    t++, s++;
  }
  return *s - *t;


}

void foo(char *s) { 
  printf("foo():\n");
  while (*s != '\0') { 
    printf("char: %c\n", *s);
    s++;
  }
}


void strcat2(char s[], char t[]) { 
  printf("s: %s\n", s);
  int i = 0;
  while (s[i] != '\0')
    i++;
  int j = 0;
  while (s[i++] = t[j++])
    ;
  printf("s: %s\n", s);
}

void strcat_p(char *s, char *t) { 
  printf("s: %s\n", s);
  char *f = s;
  while (*s != '\0')
    ++s;
  while (*s = *t) { 
    printf("s: %d, *s: %c, *t: %c\n", s, *s, *t);
    printf("f: %s\n", f);
    *s++;
    *t++;
  }
  printf("f: %s\n", f);
}

main() { 
  /*
  char s1[80] = "foo";
  char s2[80] = "";
  printf("s2: %s\n", s2);
  printf("%s\n", s1);
  prnt(s1); 
  strcpy2(s2, s1);
  printf("s2: %s\n", s2);
  int r;
  char s3[80] = "abc";
  char s4[80] = "abb";
  r = strcmp2(s3, s4);
  printf("r: %d\n", r);
  foo(s3);
  */
  //char *a = "abc";
  char a[10] = "abc";
  char *b = "defg";
  strcat2(a, b);
  char c[10] = "abc";
  char *d = "defg";
  strcat_p(c, d);
}
