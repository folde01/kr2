#include <stdio.h>
#include <string.h>


/* Exercise 5-4. Write the function strend(s,t) , which returns 1 if the string t occurs at the
 end of the string s , and zero otherwise. */

int strend2(char *s, char *t) 
{ 

  printf("START *t: %c *s: %c s: %d s: %s\n", *t, *s, s, s);

  //while (*s++) { 
  while (*++s) { 
    //printf("YODA *t: %c *s: %c s: %d s: %s\n", *t, *s, s, s);
    printf("YODA *t: %c s: %d s: %s *s: %c\n", *t, s, s, *s);
  }

  printf("END *t: %c *s: %c s: %d s: %s\n", *t, *s, s, s);

  int len = 0;
  while (*t++) ++len; 
  //while (*++t) ++len; 
  printf("len: %d\n", len);

  
  --t; --t;
  //--t; 
  //--s; --s;
  --s;
  //--t; --s;

  while (len > 0) { 
  //while (len > 1) { 
    printf("yoda len: %d\n", len);
    printf("YODA *t: %c *s: %c s: %d s: %s\n", *t, *s, s, s);
    if (*t != *s) {  
      printf("miss. len: %d\n", len);
      return 0;
    }
    else { 
      printf("match. len: %d\n", len);
      --len;
      --t;
      --s;
    }
  }
  return 1;
}

int strend(char *s, char *t) 
{ 
  printf("\n");
  printf("s: %s\n", s);
  while (*s++) { 
    printf("s: %s\n", s);
  }
  printf("t: %s\n", t);
  int len = 0;
  while (*t++) { 
    len++;
    printf("t: %s\n", t);
    printf("len: %d\n", len);
  }
  while (len-- > 0) { 
    printf("t2: %s\n", t);
    if (*(t-len) != *(s-len))
      return 0;
  }
  return 1;
}


main() { 
  char s[] = "abc";
  char t[] = "defg";
  //printf("%d\n", strend(s, t));

  char s2[] = "abcd";
  char t2[] = "bc";
  //printf("%d\n", strend(s2, t2));

  printf("\n");
  char s3[] = "abcd";
  char t3[] = "ed";
  printf("\nTEST should be 0: %d\n\n", strend2(s3, t3));

  char s4[] = "abcd";
  char t4[] = "cd";
  printf("\nTEST should be 1: %d\n\n", strend2(s4, t4));

  char s5[] = "abcd";
  char t5[] = "dbcd";
  printf("\nTEST should be 0: %d\n\n", strend2(s5, t5));

  char s6[] = "d";
  char t6[] = "c";
  printf("\nTEST should be 0: %d\n\n", strend2(s6, t6));
}
