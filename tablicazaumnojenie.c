#include <stdio.h>
#include <math.h>

int main(){
    int number;
    int i;
    printf("Enter number: ");
    scanf("%d", &number);
    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n", number, i ,  number * i);
    }
    return 0;

}