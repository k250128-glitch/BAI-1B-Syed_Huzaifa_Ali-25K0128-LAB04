#include <stdio.h>
#include <stdlib.h>

int main()
{
    char flavour;


    printf("Welcome to the Icecream Parlour\n");
    printf("Kindly write your desired icecream flavour.\n1. Vanilla(V)\n2. Chocolate(C)\n3. Strawberry(S).\n");
    scanf("\n%c",&flavour);

    switch(flavour){
        case 'V':
        case 'v':
            printf("You chose Vanilla\n." );
            break;
        case 'C':
        case 'c':
            printf("You chose Chocolate\n");
            break;
        case 'S':
        case 's':
             printf("You chose Strawberry\n");
             break;
        default:
            printf("Invalid Flavour");
    return 0;


    }






    return 0;
}
