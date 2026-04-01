#include <stdio.h>

int main() {
    char ch;
    int width = 10;
    int height = 5;

    printf("Въведете символ: ");
    scanf(" %c", &ch);   // интервалът е важен!

    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {

            // горен и долен ред
            if(i == 0 || i == height - 1)
                printf("%c", ch);

            // странични стени
            else if(j == 0 || j == width - 1)
                printf("%c", ch);

            // вътрешност
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
