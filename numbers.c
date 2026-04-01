#include <stdio.h>

int main(){

    int a = 1;
    int thebiggest = -1000000;
    int thesmallest = 1000000;

    while(a != 0){

        printf("Type random number (0 to stop): ");
        scanf("%d", &a);

        if(a == 0){
            break;
        }

        if(a > thebiggest){
            thebiggest = a;
        }

        if(a < thesmallest){
            thesmallest = a;
        }
    }

    printf("The biggest number is %d\n", thebiggest);
    printf("The smallest number is %d\n", thesmallest);

    return 0;
}