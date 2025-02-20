#include <stdio.h>
#include <time.h>

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

void divide(int a, int b){
    if(b==0){
        printf("Não é permitido realizar divisão por 0\n");
    } else {
        printf("%d/%d = %.2f\n", a, b, (float)a/b);
    }
}

int main() {
    char user_name[30];
    
    time_t total;
    struct tm *data;
    time(&total);

    printf("\nDigite o nome do usuario: ");
    scanf("%s", user_name);

    printf("\nOla, %s!\n", user_name);
    printf("Data atual: %s\n", asctime(localtime(&total)));
    soma(5, 3);
    multiplica(5, 3);
    return 0;
}
