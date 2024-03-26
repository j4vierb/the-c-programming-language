#include <stdio.h>

main() {
  // Exercise 1-10. Write a program to copy its input to its output,
  // replacing each tab by \t, each backspace by \b, and each backslash by \\.
  int c;
  
  while((c = getchar()) != EOF) {
    if(c == '\t') {
      putchar('\\');
      putchar('t');
    } else if(c == '\b') {
      putchar('\\');
      putchar('b');
    } else if(c == '\\') {
      putchar('\\');
    } else {
      putchar(c);
    }
  }
}
