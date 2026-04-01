#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rules() {
    int guess;
    int a = rand() % 10 + 1;
    int tries = 3;

    while (tries > 0) {
        printf("\nВъведи число (1-10). Оставащи опити: %d\n", tries);
        printf("Твоето предположение: ");
        scanf("%d", &guess);

        if (guess == a) {
            printf("ПЕЧЕЛИШ! Числото беше %d\n", a);
            return;
        }

        if (guess + 1 == a || guess - 1 == a) {
            printf("Много си близо!!! (+1 опит)\n");
            tries += 1;
        } else if (guess > a) {
            printf("Пробвай по-малко число.\n");
            tries -= 1;
        } else {
            printf("Пробвай по-голямо число.\n");
            tries -= 1;
        }
    }

    printf("\nЗАГУБИ! Числото беше %d\n", a);
}

int main() {
    printf("Добре дошъл в играта!!!\n");

    srand(time(NULL)); // важно за истинска случайност

    rules();
    return 0;
}