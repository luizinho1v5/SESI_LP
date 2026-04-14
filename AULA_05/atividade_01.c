#include <stdio.h>

int main()
{
    float nota[10], media = 0, soma = 0;
    int total_acima_da_media = 0;
    int i;

    for(i = 0; i < 10; i++){
        printf("\nDigite nota %i: ", i+1);
        scanf("%f", &nota[i]);
        soma = soma + nota[i];
    }

    media = soma / 10;
    printf("\nA media da turma é: %.2f\n", media);
    printf("\nNotas acima da media:\n");

    i = 0;
    while(i < 10){
        if(nota[i] > media){
            printf("Nota %d: %.2f\n", i+1, nota[i]);
            total_acima_da_media++;
        }
        i++;
    }

    printf("\nTotal de alunos acima da media: %i\n", total_acima_da_media);

}