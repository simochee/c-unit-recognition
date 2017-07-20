#include <stdio.h>
#include <string.h>

void encrypt(char *text, char *list) {
    int i;

    for(i = 0; i < strlen(text); i++) {
        printf("%c", list[text[i] - 97]);
    }

    printf("\n");
}

int main(void) {
    char text[200];
    char list[60] = "wunqgzsbkvodihypjmxtrcflae";

    printf("暗号化する文字列：");
    scanf("%s", text);

    encrypt(text, list);

    return (0);
}