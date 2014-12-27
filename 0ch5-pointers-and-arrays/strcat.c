#include <stdio.h>
#include <string.h>


void strcat3(char *s, char *t) 
{ 
  //while (*s++ != '\0') { 
  printf("*s: %s s: %d\n", s, s);
  //while (*s++ != '\0') { 
  while (*s++) { 
    printf("*s: %s s: %d\n", s, s);
  }
  printf("*s: %s s: %d\n", s, s);
  printf("%s\n", "yoda");
  s--;
  while (*s++ = *t++) { 
    printf("s: %s\n", s);
    printf("t: %s\n", t);

  }
}

/* strcat: concatenate t to end of s; s must be big enough */
void strcat2(char s[], char t[])
{ 

  int i, j;
  i = j = 0;
  while (s[i] != '\0') /* find end of s */
    i++;
    while ((s[i++] = t[j++]) != '\0') /* copy t */
      ;
}



main() { 
  char s[] = "abc";
  char t[] = "defg";
  strcat2(s, t);
  printf("%s\n\n", s);

  char s3[] = "av";
  char t3[] = "iii";
  strcat3(s3, t3);
  printf("%s\n", s3);
}
