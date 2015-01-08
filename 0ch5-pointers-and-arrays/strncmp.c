/* compare at most n characters of string cs to string ct ; return <0 if
cs<ct , 0 if cs==ct , or >0 if cs>ct .*/
#include <stdio.h>
#include <string.h>

int strncmp2(char *cs, char *ct, int n);

int strncmp2(char *cs, char *ct, int n) { 
  while (*cs == *ct && n > 0) { 
    if (*cs < *ct)
    
  }
}

main() { 
  char *cs1 = "abc0"; 
  char *ct1 = "abc1"; 
  printf("0 ? %d\n", strncmp(cs1, ct1, 3));   

  char *cs2 = "abc0"; 
  char *ct2 = "abc2"; 
  printf("0 ? %d\n", strncmp2(cs2, ct2, 3));   
}
