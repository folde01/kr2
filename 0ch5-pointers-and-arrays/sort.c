#include <stdio.h>
#include <string.h>

#define MAXLINES 5000 /* max #lines to be sorted */
#define ALLOCSIZE 10000 /* size of available space */
#define MAXLEN 1000 /* max length of any input line */

static char allocbuf[ALLOCSIZE]; /* storage for alloc */ // why does this need to be way up here rather than eg down by def of alloc?
static char *allocp = allocbuf; /* next free position */
char *lineptr[MAXLINES]; /* pointers to text lines */

char *alloc(int);
void swap(char *v[], int i, int j);
void qsort2(char *v[], int left, int right);
void strcpy2(char *s, char *t);
//void strcpy2(char *s, char t[]);
int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);
void qsort2(char *lineptr[], int left, int right);
//int getline2(char *, int);
int getline2(char [], int);

/* sort input lines */
main()
{
  int nlines;
  /* number of input lines read */
  if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
    qsort2(lineptr, 0, nlines-1);
    writelines(lineptr, nlines);
    return 0;
  } else {
    printf("error: input too big to sort\n");
    return 1;
  }
}



/* readlines: read input lines */
int readlines(char *lineptr[], int maxlines)
{
	int len, nlines;
	char *p, line[MAXLEN];
  //char *s;
	nlines = 0;
  //int getline2(char *, int);
	//len = getline2(s, MAXLEN);
	//while ((len = getline2(line, MAXLEN)) > 0)
	while ((len = getline2(line, MAXLEN)) > 0)
  	//if (nlines >= maxlines || p = alloc(len) == NULL) 
  	if (nlines >= maxlines || (p = alloc(len)) == NULL) 
    	return -1;
  	else {
    	line[len-1] = '\0'; /* delete newline */
	    strcpy2(p, line);
	    lineptr[nlines++] = p;
	  }
	return nlines;
}

/* getline2: read a line into s, return length */
int getline2(char s[], int lim) {
	int c, i;
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
	  s[i] = c;
	if (c == '\n') {
	  s[i] = c;
	  ++i;
	}
	s[i] = '\0';
	return i;
}


/* return pointer to n characters */
char *alloc(int n) 
{
	if (allocbuf + ALLOCSIZE - allocp >= n) { /* it fits */
	  allocp += n;
	  return allocp - n; /* old p */
	} else /* not enough room */
	    return 0;
}

/* strcpy2: copy t to s; pointer version 3 */
void strcpy2(char *s, char *t)
//void strcpy2(char *s, char t[])
{
  while (*s++ = *t++)
    ;
}

/* writelines: write output lines */
void writelines(char *lineptr[], int nlines)
{
  int i;
  for (i = 0; i < nlines; i++)
    printf("%s\n", lineptr[i]);
}

/* qsort2: sort v[left]...v[right] into increasing order */
void qsort2(char *v[], int left, int right)
{
	int i, last;
	void swap(char *v[], int i, int j);
	if (left >= right) /* do nothing if array contains */
	  return;
	/* fewer than two elements */
	swap(v, left, (left + right)/2);
	last = left;
	for (i = left+1; i <= right; i++)
	  if (strcmp(v[i], v[left]) < 0)
	    swap(v, ++last, i);
	swap(v, left, last);
	qsort2(v, left, last-1);
	qsort2(v, last+1, right);
}

/* swap: interchange v[i] and v[j] */
void swap(char *v[], int i, int j)
{
	char *temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
