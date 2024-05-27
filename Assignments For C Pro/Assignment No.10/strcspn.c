#include <stdio.h>

int* mystrcspn(char*, char*);

int main() {
  char str1[] = "Hello, india!";
  char str2[] = "a!";
  int *length = mystrcspn(str1, str2);
  printf("The length of the initial segment of str1 that does not contain any characters from str2 is: %d\n", length);
  return 0;
}

int* mystrcspn( char *str1, char *str2) {
  int i, j;
  for (i = 0; str1[i] != '\0'; i++) {
    for (j = 0; str2[j] != '\0'; j++) {
      if (str1[i] == str2[j]) {
        return i;
      }
    }
  }
  return i;
}

