#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main() {
  /*printf("%d\n", 0||0); // 0*/
  /*printf("%d\n", 3||0); // 1*/
  /*printf("%d\n", 1||1); // 1*/
  /*printf("%d\n", 1.1||0); // 1*/

  /*int x = 3, y = 6;*/
  /*printf("%d\n", x & y);*/
  /*printf("%d\n", x | y);*/
  /*printf("%d\n", x ^ y);*/
  /*printf("%d\n", ~x);*/

  /*char *d = "Mohit";*/
  /*printf("*d=%d\n", *d);                  // 77*/
  /*printf("d=%s\n", d);                    // Mohit*/
  /*printf("sizeof(*d)=%lu\n", sizeof(*d)); // 1*/
  /*printf("sizeof(d)=%lu\n", sizeof(d));   // 8*/

  /*int x = 3, y = -3;*/
  /*int ans = x << ~y >> x << 7 >> 2 ^ x;*/
  /*printf("%d", ans);*/

  /*int a = '2';*/
  /*int b = 'a';*/
  /*int ans = b++ ^ ++a ? ~(a + 1) + ~a + b ? ~b - a : ~(a + b) : a & b;*/
  /*printf("%d\n", ans);*/

  char str[] = "GATE 2024";
  char *ptr = str;
  printf("%d", (int)strlen(str + 1 [ptr] - ptr[8] - 9));
  return 0;
}
