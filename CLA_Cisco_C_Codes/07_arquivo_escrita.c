#include <stdio.h>
int main() {
    FILE *f = fopen("saida.txt", "w");
    if (f == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    fprintf(f, "Gravando no arquivo usando C!\n");
    fclose(f);
    printf("Arquivo escrito com sucesso.\n");
    return 0;
}