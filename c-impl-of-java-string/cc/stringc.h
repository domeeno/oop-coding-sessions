#ifndef STRINGC_H
#define STRINGC_H

typedef struct {
  char *text;
  int textSize;
} stringc;

void stringc_free(stringc *);
stringc *stringc_new();
stringc *stringc_new_val(char *);
void stringc_assign(stringc *, char *);
void stringc_print(stringc *);

#endif // STRINGC_H
