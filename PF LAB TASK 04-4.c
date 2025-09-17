#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cone;
    char choice;
    int scoops;
    float Cost;// Asks number of scoops
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
    }//Asks cone and type
    printf("Would you like a cone(Y/n)!\n");
    scanf(" %c",&choice);
    switch(choice){
        case 'Y':
        case 'y':
            printf("Kindly Select the type(Regular=R/Waffle=W)\n");
            scanf(" %c",&cone);
            switch(cone){
                case 'R':
                case 'r':
                    Cost=Cost+0.50;
                    break;
                case 'W':
                case 'w':
                    Cost=Cost+1.00;
                    break;
                default:
                    printf("Invalid cone choice!\n");
                    return 0;
            }
            break;
        case 'N':
        case 'n':
            printf("Understood");
            break;
        default:
            printf("Invalid cone size!\n");
            return 0;

    }
    printf("\nNo: of scoops: %d\n", scoops);
    printf("Added cone: %c\n", choice);

    printf("Net Total: $%.2f\n", Cost);

    return 0;
}
