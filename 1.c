#include <stdio.h>
int main() {
    int a;
    long b = 1;
    printf("masukkan bilangan: ");
    scanf("%d", &a);
    if (a < 0) {
        printf("masukkan bilangan positif.\n");
    } else {
        for (int i = 1; i <= a; ++i) {
            b *= i;
        }
        printf("faktorial dari %d adalah %ld\n", a, b);
    }

    return 0;
}
