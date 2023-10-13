#include <stdio.h>
#include <string.h>

#define MAX_NOME 10

int main() {
    char log[MAX_NOME];
    int key = 1;
    char l[MAX_NOME];
    int k = 1;
    char name[MAX_NOME];

    printf("DIGITE SEU NOME:\n");
    fflush(stdin); // limpa o buffer de entrada
    fgets(name, MAX_NOME, stdin); // usa fgets em vez de scanf
    name[strcspn(name, "\n")] = '\0'; // remove o '\n' lido pelo fgets

    printf("CRIE SEU LOGIN:\n");
    fgets(log, MAX_NOME, stdin);
    log[strcspn(log, "\n")] = '\0';

    printf("CRIE SUA SENHA: \n");
    scanf("%d", &key);

    printf("ENTRE COM SEU LOGIN E SENHA:\n");
    printf("DIGITE SEU LOGIN:\n");
    fflush(stdin);
    fgets(l, MAX_NOME, stdin);
    l[strcspn(l, "\n")] = '\0';

    printf("DIGITE SUA SENHA:\n");
    scanf("%d", &k);

    if (strcmp(log, l) == 0 && key == k) {
        printf("ACESSO CONCEDIDO:\n");
        printf("BEM-VINDO, %s!\n", name);

    } else {
        printf("ACESSO BLOQUEADO: ");
        if (strcmp(log, l) != 0) {
            printf("LOGIN INCORRETO\n");
        } else {
            printf("SENHA INCORRETA\n");
        }
    }

    return 0;
}

