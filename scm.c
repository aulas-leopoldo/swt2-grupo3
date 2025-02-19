#include <stdio.h>

void soma(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

void multiplica(int a, int b) {
    printf("%d x %d = %d\n", a, b, a * b);
}

int main() {
    char user_name[30];
    printf("Digite o nome do usuário: ");
    scanf("%s", user_name);
    printf("Olá, %s!\n", user_name);
    soma(5, 3);
    multiplica(5, 3);
    return 0;
}
