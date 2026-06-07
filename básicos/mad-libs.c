#include <stdio.h>
#include <string.h>

int main() 
{
    char noun[50] = "";
    char verb[50] = "";
    char adjetive1[50] = "";
    char adjetive2[50] = "";
    char adjetive3[50] = "";

    printf("Escribir un adjetivo (descripción): ");
    fgets(adjetive1, sizeof(adjetive1), stdin);
    adjetive1[strlen(adjetive1) - 1] = '\0';

    printf("Escribir un sustantivo (animal o persona): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Escribir un adjetivo (descripción): ");
    fgets(adjetive2, sizeof(adjetive2), stdin);
    adjetive2[strlen(adjetive2) - 1] = '\0';

    printf("Escribir un verbo (finalizado en -ando/-endo): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Escribir un adjetivo (descripción): ");
    fgets(adjetive3, sizeof(adjetive3), stdin);
    adjetive3[strlen(adjetive3) - 1] = '\0';

    printf("\n Hoy estaba %s, cuando oí un ruido muy %s, era un %s, y estaba muy %s, me sentí muy %s.\n", verb, adjetive1, noun, adjetive2, adjetive3);

    return 0;
}