#include <stdio.h>
int main() {
    char op;
    float a, b;
    printf("Digite a operação (+ - * /): ");
    scanf(" %c", &op);
    printf("Digite dois números: ");
    scanf("%f %f", &a, &b);
    switch(op) {
        case '+': printf("Resultado: %.2f\n", a + b); break;
        case '-': printf("Resultado: %.2f\n", a - b); break;
        case '*': printf("Resultado: %.2f\n", a * b); break;
        case '/': 
            if (b != 0) printf("Resultado: %.2f\n", a / b);
            else printf("Erro: divisão por zero!\n");
            break;
        default: printf("Operação inválida.\n");
    }
    return 0;
}