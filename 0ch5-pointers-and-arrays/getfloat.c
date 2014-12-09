#include <ctype.h>
#include <stdio.h>

int getch(void);
void ungetch(int);
/* int SIZE = 10; */
int SIZE = 4;

main() { 
  int n; 
  float array[SIZE], getfloat(int *); 

  for (n = 0; n < SIZE && (array[n] = -999) && getfloat(&array[n]) != EOF; n++)
    ;

  for (n = 0; n < SIZE; n++)
    printf("%f ", array[n]); 

}

/*
int getfloat(float *pn) { 
  *pn = 1;
  return 1;
}
*/


int getfloat(float *pn) { 
  int c, sign;

  while (isspace(c = getch()))
    ;
  if (!isdigit(c) && c != EOF && c != '+' && c != '-') { 
    ungetch(c); /* if you put it back don't you just get it again next time so infinite loop? */
    //printf("yoda\n");
    return 0;
  }
  sign = (c == '-') ? -1 : 1;
  if (c == '+' || c == '-') { 
    c = getch();
  }

  if (!isdigit(c)) { 
    ungetch(c);
    return 0;
  }

  for (*pn = 0; isdigit(c); c = getch())
    *pn = 10 * *pn + (c - '0');
  if (c == '.')
    int p = 1;
    for (; isdigit(c); c = getch()) { 
      p *= 10;
      *pn += (c - '0') / p;
    }

  *pn *= sign;
  if (c != EOF)
    ungetch(c);
  return c;
}

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch() { 
  return (bufp > 0) ? buf[--bufp] : getchar(); /* but how do you access buf[0]? */ 
}

void ungetch(c) { 
  if (bufp >= BUFSIZE) 
    printf("ungetch: too many characters\n");
  else
    buf[bufp++] = c;
}
