#include <stdio.h>

int main(){
    int rows;
    int colums;
    char symbol;

    printf("Enter number of the rows: ");
    scanf("%d",&rows);

    printf("Enter number of the colums: ");
    scanf("%d",&colums);

    printf("Enter random symbol: ");
    scanf(" %c",&symbol);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < colums;j++){
            if(j==0 || j == colums -1 || i ==0 || i == rows - 1){
                printf("%c", symbol);
            }else{
                printf(" ");
            }
           
        }
        printf("\n");
    }
    
    return 0;




}