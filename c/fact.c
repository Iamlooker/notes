#include <stdio.h>

long long fact(int n) {
  if (n == 0 || n == 1)
    return 1;
  return n * fact(n - 1);
}

int main(int argc, char *argv[]) {
  int f;
  sscanf(argv[1], "%d", &f);
  printf("Factorial of %d:\n", f);
  printf("%lld\n", fact(f));
  return 0;
}
