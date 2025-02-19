#include <stdio.h>
#include <time.h>

void soma(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
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
    time_t total;
    struct tm *data;
    
    time(&total);
    data = localtime(&total);

    printf("Olá, Estudante!\nData Atual: %s\n", asctime(data));

    soma(5, 3);
    multiplica(5, 3);
    return 0;
}
