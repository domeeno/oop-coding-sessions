#include "stringc.h"

int main() {
  stringc *var = stringc_new_val("hello");
  stringc_print(var);
  stringc_assign(var, "Nice one");
  stringc_print(var);
  stringc_free(var);
  return 0;
}
