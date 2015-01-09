/* compare at most n characters of string cs to string ct ; return <0 if
cs<ct , 0 if cs==ct , or >0 if cs>ct .*/
#include <stdio.h>
#include <string.h>

int strncmp2(char *cs, char *ct, int n);

int strncmp2(char *cs, char *ct, int n) { 
  while (n > 0) { 
    if (*cs < *ct) { 
      printf("less\n");
      return -10;
    }
    else if (*cs > *ct) { 
      printf("more\n");
      return 10;
    }
    cs++, ct++, n--;
  }
  return 0;
}

main() { 
  char *cs1 = "abc0"; 
  char *ct1 = "abc1"; 
  printf("0 ? %d\n", strncmp(cs1, ct1, 3));   

  char *cs2 = "fbc4"; 
  char *ct2 = "c2"; 
  printf("0 ? %d\n", strncmp2(cs2, ct2, 5));   
}
