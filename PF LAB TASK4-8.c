#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cone;
    char choice;
    int scoops;
    float Cost , discounted_price;
    char sprinkles;
    int day;
    int age;//Asks scoops
    printf("How many scoops would you like today 1,2 or perhaps 3.\n1 scoop = $2.00\n2 scoops =$3.50\n3 scoops =$4.50\n\n");
    scanf(" %d",&scoops);
    if (scoops==1){
        Cost=2.00;
    }
    else if(scoops==2){
        Cost = 3.50;
    }
    else if(scoops==3){
        Cost= 4.50;
    }
    else{
        printf("Invalid Choice");
        return 0;
    }//asks cone and type
    printf("Would you like a cone(Y/N)!\n");
    scanf(" %c",&choice);
    switch(choice){
        case 'Y':
        case 'y':
            printf("Kindly Select the type(M= Medium/W= Waffle)\n");
            scanf(" %c",&cone);
            switch(cone){
                case 'M':
                case 'm':
                    Cost=Cost+0.50;
                    break;
                case 'W':
                case 'w':
                    Cost=Cost+1.00;
                    break;
                default:
                    printf("Invalid cone size!\n");
                    return 0;
            }
            break;
        case 'N':
        case 'n':
            printf("Understood\n");
            break;
        default:
            printf("Invalid choice of cone!\n");
            return 0;

    }
    if (scoops==3 && (cone=='W'||cone=='w')){
        printf("You get a free topping\n");
    }
    else{
        printf("No free topping for you this time");
    }//asks sprinkles
    printf("Would you like sprinkles with that!:(Y/N)\n");
    scanf(" %c",&sprinkles);
    switch(sprinkles){
        case 'Y':
        case 'y':
            Cost+=.75;
            break;
        case 'N':
        case 'n':
            printf("Understood\n");
            break;
        default:
            printf("Invalid Choice");
            return 0;

    }//asks age discount
    printf("There is a discount based on your age!\n Kindly Enter your age to avail it:\n" );
    scanf(" %d",&age);
    if(age<12){
        printf("Congrats children below 12 get a $1 discount\n ");
        Cost=Cost-1.00;
    }
    else{
        printf("Sorry this is only available to ages below 12\n");
    }//asks weekend discount
    printf("There is a discount on weekends.\nKindly Enter what day is it today to avail your discount\n1=Monday.\t2=Tuesday.\n3=Wednesday.\t4=Thursday.\n5=Friday.\t6=Saturday.\n7=Sunday.\n");
    scanf(" %d",&day);
    if (day==6 || day==7){
        printf("Congartualtions you get a 10%% discount\n");
        discounted_price= Cost- (Cost*.10);
        printf("\nNo: of scoops: %d\n", scoops);
        printf("Added cone: %c\n", choice);
        printf("Added Sprinkles:%c\n",sprinkles);
        printf("Net Total: $%.2f\n", discounted_price);
    }
    else{
        printf("Sorry the discount is only available on weekends\n");
         printf("\nNo: of scoops: %d\n", scoops);
        printf("Added cone: %c\n", choice);
        printf("Added Sprinkles:%c\n",sprinkles);
        printf("Net Total: $%.2f\n", Cost);
    }
}
