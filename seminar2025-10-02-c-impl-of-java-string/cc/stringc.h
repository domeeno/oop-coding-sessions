#ifndef STRINGC_H
#define STRINGC_H

typedef struct {
  char *text;
  int textSize;
} stringc;

stringc *stringc_new();
stringc *stringc_new_val(char *);

#endif // STRINGC_H
