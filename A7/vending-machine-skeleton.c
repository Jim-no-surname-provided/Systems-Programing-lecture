#include <stdio.h>
int main()
{
    printf("Vending machine v0.1\n\n");

    // selection of beverages
    int type;
    printf("Choose your drink:\n");
    printf("1) Water (0,50 Euro)\n");
    printf("2) Lemonade (1,00 Euro)\n");
    printf("3) Beer (2,00 Euro)\n\n");
    printf("Enter 1, 2 or 3: ");
    scanf("%d", &type);

    float price = 0;
    // get the amount to be paid
    switch (type) {

    case 1:
        price = 0.5;
        break;

    case 2:
        price = 1.;
        break;

    default:
        price = 2.;
    }

    // request for payment
    float payment = 0;
    while (price > 0){
        printf("\nPlease insert %.2f Euro: ", price);
        if(!scanf("%f", &payment)){
            printf("Sorry, that's not a valid amount.\n");
            return 1;
        }
        price -= payment;
    }

    // check the coin
    printf("\nThank you! Enjoy your drink.\n");
    
    if (price < 0){
        printf("\nHere's your change: %.2f\n", -price);
    }
    
    
}