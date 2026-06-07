#include <stdio.h>
#include <string.h>

int main() 
{
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("¿Que producto va a comprar?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("¿Cual es es precio individual del producto?: ");
    scanf("%f", &price);

    printf("¿Cuantos va a comprar?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nCompró: %d %s/s.\n", quantity, item);
    printf("Total: %c%.2f\n", currency, total);

    return 0;
}