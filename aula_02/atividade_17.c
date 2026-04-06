#include <stdio.h>

int main() {
    float temp;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temp);

    if (temp < 15) {
        printf("Clima: Frio\n");
    } else if (temp <= 25) {
        printf("Clima: Agradavel\n");
    } else {
        printf("Clima: Quente\n");
    }
}
