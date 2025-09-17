#include <stdio.h>
#include <stdlib.h>
 int main(){
    int scoops;
    printf("Please decide on the number of scoops you would like today 1 scoop=$2.00.");
    scanf("%d",&scoops);
    if (scoops>1){
        printf("Please see our multi-scoop offers.");
    }
    else{
        printf("Your total is $2.00 ");
    }
    return 0;
}
