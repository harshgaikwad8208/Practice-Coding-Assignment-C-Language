#include <stdio.h>
#include <string.h>

void mystrncat(char*, char*, int);

int main() {
    char dest[20] = "Harshal";
    char src[] = "Gaikwad";
    mystrncat(dest, src, 5);
    printf("Concatenated String (First 3 Chars): %s\n", dest);
    return 0;
}

void mystrncat(char *dest, char *src, int n) {
    int dest_len = strlen(dest);
    int i = 0;
    while (src[i] != '\0' && i < n) {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
}
