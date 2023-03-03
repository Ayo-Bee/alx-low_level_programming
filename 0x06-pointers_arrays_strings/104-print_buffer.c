#include <stdio.h>
#include <ctype.h>

void print_buffer(char *b, int size) {
    if (size <= 0) {
        printf("\n");
        return;
    }

    int i, j;
    for (i = 0; i < size; i += 10) {
        printf("%08x ", i);

        // Print the hexadecimal content
        for (j = i; j < i + 10; j += 2) {
            if (j < size) {
                printf("%02x", b[j] & 0xff);
                if (j + 1 < size) {
                    printf("%02x ", b[j+1] & 0xff);
                } else {
                    printf("   ");
                }
            } else {
                printf("     ");
            }
        }

        // Print the ASCII content
        printf(" ");
        for (j = i; j < i + 10; j++) {
            if (j < size) {
                if (isprint(b[j])) {
                    printf("%c", b[j]);
                } else {
                    printf(".");
                }
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }
}

