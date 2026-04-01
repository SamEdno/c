#include <stdio.h>

int main(){
    float euro, lev;
    printf("Enter the amount in euros: ");
    scanf("%f", &euro);
    lev = euro * 1.95583;
    printf("%.2f euros is equal to %.2f leva.\n", euro, lev);
    return 0;
}
