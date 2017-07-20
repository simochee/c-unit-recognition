/**
 * 文字列をランダムな並びのアルファベットと置き換えて暗号化する
 */
#include <stdio.h>
#include <string.h>

/* 暗号化する関数 */
void encrypt(char *text, char *list) {
    int i;
    
    // strlen : 文字列の長さを求める関数
    for(i = 0; i < strlen(text); i++) {

        // 置き換えた文字を表示
        printf("%c", list[text[i] - 97]);
        
        i++;
    }

    printf("\n");
}

int main(void) {
    /* 変数の宣言 */
    // 平文の文字列
    char text[200];
    // a-zまでの置き換え対照表
    char list[60] = "wunqgzsbkvodihypjmxtrcflae";

    /* 平文の入力 */
    printf("暗号化する文字列：");
    scanf("%s", text);

    /* 暗号化して表示する */
    encrypt(text, list);

    return (0);
}

/*
    wunqgzsbkvodihypjmxtrcflae
    abcdefghijklmnopqrstuvwxyz
*/