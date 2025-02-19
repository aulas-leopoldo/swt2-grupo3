#include <stdio.h>

void soma(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

void subtrai(int a, int b) {
    if(a - b < 0) printf("A subtracao nao pode resultar num numero menor que zero!\n");
    else printf("%d - %d = %d\n", a, b, a - b);
}

void multiplica(int a, int b) {
    printf("%d x %d = %d\n", a, b, a * b);
}

int main() {
    printf("Olá, Estudante!\n");
    soma(5, 3);
    multiplica(5, 3);
    return 0;
}
