#include <stdio.h>
#include <stdlib.h>

int main()
{
    int scoops;
    printf("How many scoops would you like today 1,2 or perhaps 3.\n1 scoop = $2.00\n2 scoops =$3.50\n3 scoops =$4.50\n\n");
    scanf("\n%d",&scoops);
    if (scoops==1){
        printf("No of scoops Selected:01\nTotal cost:$2.00 ");
    }
    if(scoops==2){
        printf("No of scoops Selected:02\nTotal cost:$3.50 ");
    }
    else{
        printf("No of scoops Selected:03\nTotal cost:$4.50 ");

    }
    return 0;
}
