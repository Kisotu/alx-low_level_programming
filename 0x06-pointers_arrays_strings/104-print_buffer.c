#include <stdio.h>
#include <string.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size) {
    int i, j;

    if (size == 0 || b == NULL) {
        printf("\n");
        return;
    }

    for (i = 0; i < size; i += 10) {
        printf("%08x: ", i);
        for (j = 0; j < 10; j++) {
            if (i + j < size) {
                printf("%02x ", b[i + j]);
            } else {
                printf("  ");
            }
        }
        printf("  ");
        for (j = 0; j < 10; j++) {
            if (i + j < size) {
                char c = b[i + j];
                if (c >= ' ' && c <= '~') {
                    printf("%c", c);
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

