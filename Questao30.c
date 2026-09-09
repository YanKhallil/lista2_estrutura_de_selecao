#include <stdio.h>

int lerResposta() {
    char resposta[10];
    scanf("%s", resposta);

    switch (resposta[0]) {
        case 's':
        case 'S':
            return 1;
        default:
            return 0;
    }
}

int main() {
    int resp;

    printf("Responda com Sim ou Nao\n\n");

    printf("E mamifero? ");
    resp = lerResposta();

    switch (resp) {

        case 1: // ---------- MAMIFEROS ----------
            printf("E quadrupede? ");
            resp = lerResposta();

            switch (resp) {
                case 1:
                    printf("E carnivoro? ");
                    resp = lerResposta();

                    switch (resp) {
                        case 1:
                            printf("\nO animal escolhido foi o LEAO\n");
                            break;
                        default:
                            printf("E herbivoro? ");
                            resp = lerResposta();
                            switch (resp) {
                                case 1:
                                    printf("\nO animal escolhido foi o CAVALO\n");
                                    break;
                                default:
                                    printf("\nAnimal nao identificado.\n");
                            }
                    }
                    break;

                default:
                    printf("E bipede? ");
                    resp = lerResposta();

                    switch (resp) {
                        case 1:
                            printf("E onivoro? ");
                            resp = lerResposta();

                            switch (resp) {
                                case 1:
                                    printf("\nO animal escolhido foi o HOMEM\n");
                                    break;
                                default:
                                    printf("E frutifero? ");
                                    resp = lerResposta();
                                    switch (resp) {
                                        case 1:
                                            printf("\nO animal escolhido foi o MACACO\n");
                                            break;
                                        default:
                                            printf("\nAnimal nao identificado.\n");
                                    }
                            }
                            break;

                        default:
                            printf("E voador? ");
                            resp = lerResposta();

                            switch (resp) {
                                case 1:
                                    printf("\nO animal escolhido foi o MORCEGO\n");
                                    break;
                                default:
                                    printf("E aquatico? ");
                                    resp = lerResposta();
                                    switch (resp) {
                                        case 1:
                                            printf("\nO animal escolhido foi a BALEIA\n");
                                            break;
                                        default:
                                            printf("\nAnimal nao identificado.\n");
                                    }
                            }
                    }
            }
            break;

        default: // ---------- NAO MAMIFEROS ----------
            printf("E ave? ");
            resp = lerResposta();

            switch (resp) {
                case 1: // ---------- AVES ----------
                    printf("E nao-voadora? ");
                    resp = lerResposta();

                    switch (resp) {
                        case 1:
                            printf("E de clima tropical? ");
                            resp = lerResposta();

                            switch (resp) {
                                case 1:
                                    printf("\nO animal escolhido foi o AVESTRUZ\n");
                                    break;
                                default:
                                    printf("E de clima polar? ");
                                    resp = lerResposta();
                                    switch (resp) {
                                        case 1:
                                            printf("\nO animal escolhido foi o PINGUIM\n");
                                            break;
                                        default:
                                            printf("\nAnimal nao identificado.\n");
                                    }
                            }
                            break;

                        default:
                            printf("E nadadora? ");
                            resp = lerResposta();

                            switch (resp) {
                                case 1:
                                    printf("\nO animal escolhido foi o PATO\n");
                                    break;
                                default:
                                    printf("E de rapina? ");
                                    resp = lerResposta();
                                    switch (resp) {
                                        case 1:
                                            printf("\nO animal escolhido foi a AGUIA\n");
                                            break;
                                        default:
                                            printf("\nAnimal nao identificado.\n");
                                    }
                            }
                    }
                    break;

                default: // ---------- REPTEIS ----------
                    printf("Tem casco? ");
                    resp = lerResposta();

                    switch (resp) {
                        case 1:
                            printf("\nO animal escolhido foi a TARTARUGA\n");
                            break;
                        default:
                            printf("E carnivoro? ");
                            resp = lerResposta();

                            switch (resp) {
                                case 1:
                                    printf("\nO animal escolhido foi o CROCODILO\n");
                                    break;
                                default:
                                    printf("Nao tem patas? ");
                                    resp = lerResposta();
                                    switch (resp) {
                                        case 1:
                                            printf("\nO animal escolhido foi a COBRA\n");
                                            break;
                                        default:
                                            printf("\nAnimal nao identificado.\n");
                                    }
                            }
                    }
            }
    }

    return 0;
}