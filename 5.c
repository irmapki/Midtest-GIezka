#include <stdio.h>
int a(int b) {
    if (b <= 1) {
        return b;
    } else {
        return a(b - 1) + a(b - 2);
    }
}
int main() {
    int b = 10;
    for (int i = 0; i < b; i++) {
        printf("%d ", a(i));
    }
    return 0;
}
