#include <stdio.h>
struct Pessoa {
    char nome[50];
    int idade;
};
int main() {
    struct Pessoa p1 = {"João", 25};
    printf("Nome: %s, Idade: %d\n", p1.nome, p1.idade);
    return 0;
}