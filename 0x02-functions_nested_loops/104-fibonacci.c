#include <stdio.h>

int main() {
    int n = 98;
    int a = 1, b = 2;

    printf("%d, %d", a, b);

    for (int i = 2; i < n; i++) {
        int next = a + b;
        printf(", %d", next);

        a = b;
        b = next;
    }

    printf("\n");

    return 0;
}

