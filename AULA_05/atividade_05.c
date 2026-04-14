#include <stdio.h>

int main() {
    float temp[7];
    float soma = 0, media;
    int i;
    int diaQuente = 0, diaFrio = 0;
    int acimaMedia = 0;

 
    printf("Digite as temperaturas dos 7 dias:\n");
    for(i = 0; i < 7; i++) {
        printf("Dia %d: ", i + 1);
        scanf("%f", &temp[i]);
        soma += temp[i];
    }

 
    media = soma / 7;

    
    for(i = 1; i < 7; i++) {
        if(temp[i] > temp[diaQuente]) {
            diaQuente = i;
        }
        if(temp[i] < temp[diaFrio]) {
            diaFrio = i;
        }
    }

 
    for(i = 0; i < 7; i++) {
        if(temp[i] > media) {
            acimaMedia++;
        }
    }


    printf("\nMedia das temperaturas: %.2f\n", media);
    printf("Dia mais quente: %d (%.2f°C)\n", diaQuente + 1, temp[diaQuente]);
    printf("Dia mais frio: %d (%.2f°C)\n", diaFrio + 1, temp[diaFrio]);
    printf("Dias acima da media: %d\n", acimaMedia);
}