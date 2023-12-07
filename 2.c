#include <stdio.h>
int Prima(int angka) {
    if (angka <= 1) {
      return 0;
        
    }
    if (angka <= 3) {
     return 1;
    }
    if (angka % 2 == 0 || angka % 3 == 0) {
        return 0;
    }
    for (int i = 5; i * i <= angka; i += 6) {
        if (angka % i == 0 || angka % (i + 2) == 0) {
            return 0;
        }
        
    }
    return 1;

}
int main() {
int angka1;
printf("Masukkan angka: ");
scanf("%d", &angka1);

if (Prima(angka1)) {
printf("%d adalah bilangan prima.\n", angka1);
} else {
printf("%d bukan bilangan prima.\n", angka1);
}
return 0;
}
