#include <stdio.h>

void tax(int *original, int *price, double rate) {
    int i = 0;

    while(1) {
        if(original[i] == 0) {
            break;
        }
        if(original[i] > 0) {
            price[i] = (int)(original[i] * (1.0 + rate));
        }

        i++;
    }
}

int main(void) {
    int original[100];
    int price[100];
    int number;
    int i;

    printf("商品の個数は？\n");
    scanf("%d", &number);

    for(i = 0; i < number; i++) {
        printf("%2d : ", i + 1);
        scanf("%d", &original[i]);
    }

    original[number] = 0;

    tax(original, price, 0.08);

    printf("---------------------------\n");

    for(i = 0; i < number; i++) {
        if(price[i] == 0) {
            continue;
        }
        printf("%2d : %d円（税 %d円）\n", i + 1, price[i], price[i] - original[i]);
    }

    return 0;
}
