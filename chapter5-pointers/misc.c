#include <stdio.h>
#include <string.h>

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
  char *f = s; // save where we start so we print from here later
  while (*s != '\0')
    ++s;
  while (*s = *t) { 
    printf("s: %s, *s: %c, *t: %c\n", s, *s, *t);
    printf("f: %s\n", f);
    *s++;
    *t++;
  }
  printf("f: %s\n", f);
}

/* Exercise 5-4. Write the function strend(s,t), which returns 1 if the string t occurs at the
end of the string s, and zero otherwise.
*/
int strend(char *s, char *t) { 
  // go to end of s and t, compare each char going backwards  
  char *t0 = t;
  while (*s++ != '\0')
    printf("yoda\n"); 
  while (*t++ != '\0') 
    printf("hamish\n"); 
  s--, t--;
  while (*s == *t) { 
    printf("yoda\n"); 
    s--, t--;
  }
  return (t == t0-1) ? 1 : 0;
}


/* Exercise 5-5. Write versions of the library functions strncpy, strncat, and strncmp, which
operate on at most the first n characters of their argument strings. For example,
strncpy(s,t,n) copies at most n characters of t to s. Full descriptions are in Appendix B. */

/* char *strncpy(s, ct, n) copy at most n characters of string ct to s; return s. Pad with '\0''s if ct has fewer than n characters */
char *strncpy2(char *dest, char *src, int n)  { 
  char *r = dest;
  while ((*dest = *src) != '\0' && n > 0)   
    --n;
  return r;
}

/* char *strncat(s,ct,n) concatenate at most n characters of string ct to string s, terminate s with '\0'; return s. */

/* int strncmp(cs,ct,n) compare at most n characters of string cs to string ct; return <0 if cs<ct, 0 if cs==ct, or >0 if cs>ct.  */

main() { 

  // 5-4:

  //char s[10] = "abc"; char *ct = "ef"; int n = 1;
  //printf("%s\n", strncpy(s, ct, n)); // output: ebc

  //char s[10] = "abc"; char *ct = "ef"; int n = 1;
  //printf("%s\n", strncpy2(s, ct, n)); // output: ebc

  //char s[10];
  char *ct;
  int n;

  //s[10] = "abc"; char *ct = "ef"; int n = 1;
  char s[] = "abc"; ct = "ef"; n = 1;
  printf("%s\n", s); 
  printf("%d\n", strlen(s)); 
  printf("%s\n", strncpy2(s, ct, n)); // output: efc

  //char s[10] = "abc"; char *ct = "ef"; int n = 1;
  //printf("%s\n", strncpy2(s, ct, n)); // output: efc

  /*

  // 5-3:

  char *s = "abcdef";
  char *t = "cdef";
  printf("%d\n", strend(s, t));
  //
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
  //char *a = "abc";
  char a[10] = "abc";
  char *b = "defg";
  strcat2(a, b);
  char c[10] = "abc";
  char *d = "defg";
  strcat_p(c, d);
  */

}
