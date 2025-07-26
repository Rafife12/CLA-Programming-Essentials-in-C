#include <stdio.h>
int main() {
    int arr[5], soma = 0;
    printf("Digite 5 números:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        soma += arr[i];
    }
    printf("Soma = %d\n", soma);
    return 0;
}