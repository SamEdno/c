#include <stdio.h>

void add()
{
    double a;
    double b;
    printf("Enter thge first number: ");
    scanf("%lf", &a);
    printf("Enter the second number: ");
    scanf("%lf", &b);
    double sum = a + b;
    printf("The sum is: %.2lf\n", sum);
}
void subtract(){
    double a;
    double b;
    printf("Enter thge first number: ");
    scanf("%lf", &a);
    printf("Enter the second number: ");
    scanf("%lf", &b);
    double difference = a - b;
    printf("The difference is: %.2lf\n", difference);

}

void multiply(){
    double a;
    double b;
    printf("Enter thge first number: ");
    scanf("%lf", &a);
    printf("Enter the second number: ");
    scanf("%lf", &b);
    double product = a * b;
    printf("The product is: %.2lf\n", product);
}

void divide(){
    double a;
    double b;
    printf("Enter the first number: ");
    scanf("%lf", &a);
    printf("Enter the second number: ");
    scanf("%lf", &b);

    double devided = a / b;

    if( b == 0){
        printf("No output");
    }
    else{
        printf("The result is %.2lf", devided);

    }

}

int main(){
    printf("!Choose operation!\n");
    printf("1. ADD\n");
    printf("2.SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("4. DIVIDE\n");
    int operation;
    scanf("%d", &operation);
   
    switch(operation){
        case 1:
            add();
            break;
        case 2:
            subtract();
            break;
        case 3:
            multiply();
            break;
        case 4:
            divide();
            break;
        default:
            printf("Wrong input");      
        }
    
 return 0;   
}


