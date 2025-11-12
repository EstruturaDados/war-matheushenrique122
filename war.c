#include <stdio.h>
#include <string.h>

#define QTD_TERRITORIOS 5

// Definição da struct Territorio
typedef struct {
    char nome[50];
    char corExercito[30];
    int tropas;
} Territorio;

int main() {
    Territorio territorios[QTD_TERRITORIOS];
    
    printf("=== CADASTRO INICIAL DOS TERRITÓRIOS ===\n\n");

    for (int i = 0; i < QTD_TERRITORIOS; i++) {
        printf("Território %d:\n", i + 1);

        printf("Nome do território: ");
        fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0'; // remove \n

        printf("Cor do exército: ");
        fgets(territorios[i].corExercito, sizeof(territorios[i].corExercito), stdin);
        territorios[i].corExercito[strcspn(territorios[i].corExercito, "\n")] = '\0';

        printf("Número de tropas: ");
        scanf("%d", &territorios[i].tropas);
        getchar(); // limpa o buffer do enter após o scanf

        printf("\n");
    }

    printf("\n=== ESTADO ATUAL DO MAPA ===\n\n");

    for (int i = 0; i < QTD_TERRITORIOS; i++) {
        printf("Território %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exército: %s\n", territorios[i].corExercito);
        printf("Tropas: %d\n", territorios[i].tropas);
        printf("-----------------------------\n");
    }

    return 0;
}
