#include <stdio.h>

#define NUMBER '0'

void ungetch(int);
int getch(void);

int getop_p(char *s) { 
  char *s0 = s;
  int c;
	while ((*s = c = getch()) == ' ' || c == '\t')
    ;
  *(++s) = '\0';
  if (!isdigit(c) && c != '.')
    return c;
  s = s0;
  if (isdigit(c))
    while (isdigit(*(++s) = c = getch()))
      ;
  if (c == '.')
    while (isdigit(*(++s) = c = getch()))
      ;
  *s = '\0';
  if (c != EOF)
    ungetch(c);
  return NUMBER;
}

/* getop: get next character or numeric operand */
int getop(char s[])
{
	int i, c;
	while ((s[0] = c = getch()) == ' ' || c == '\t')
	  ;
	s[1] = '\0';
	if (!isdigit(c) && c != '.')
	  return c; /* not a number */
	i = 0;
	if (isdigit(c)) /* collect integer part */
	  while (isdigit(s[++i] = c = getch()))
	    ;
	if (c == '.') /* collect fraction part */
	  while (isdigit(s[++i] = c = getch()))
	    ;
	s[i] = '\0';
	if (c != EOF)
	  ungetch(c);
	return NUMBER;
}


#define BUFSIZE 100
char buf[BUFSIZE]; /* buffer for ungetch */
int bufp = 0; /* next free position in buf */

int getch(void) /* get a (possibly pushed-back) character */
{
  return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) /* push character back on input */
{
  if (bufp >= BUFSIZE)
    printf("ungetch: too many characters\n");
  else
    buf[bufp++] = c;
}

main() { 
  char s[10];
  int n = getop_p(s);
  printf("n: %d\n", n);
}

