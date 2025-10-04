#include "stringc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringc_free(stringc *string) {
  free(string->text);
  free(string);
}

stringc *stringc_new() {
  stringc *result = malloc(sizeof(stringc));
  result->text = malloc(sizeof(""));
  result->textSize = 0;
  return result;
};

stringc *stringc_new_val(char *chars) {
  stringc *result = malloc(sizeof(stringc));
  int charsSize = strlen(chars);
  result->text = strdup(chars);
  result->textSize = charsSize;
  return result;
};

void stringc_assign(stringc *this, char *chars) {
  free(this->text);
  this->text = strdup(chars);
  this->textSize = strlen(chars);
}

void stringc_print(stringc *this) {
  printf("%p - %s\n", this, this->text);
}
