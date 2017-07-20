# 文字列をランダムな並びのアルファベットと置き換えて暗号化するプログラム

## もくじ

<!-- TOC -->

- [文字列をランダムな並びのアルファベットと置き換えて暗号化するプログラム](#文字列をランダムな並びのアルファベットと置き換えて暗号化するプログラム)
    - [もくじ](#もくじ)
    - [実行結果](#実行結果)
    - [コメント付きプログラム](#コメント付きプログラム)
        - [解説](#解説)
    - [提出用ソースコード](#提出用ソースコード)

<!-- /TOC -->

## 実行結果

```
暗号化する文字列：programming
pmysmwiikhs
```

> ※ `scanf`の仕様により入力にスペースは使用できない（スペース以降が無視される）

```
暗号化する文字列：hello world
bgddy
```

## コメント付きプログラム

```c
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
```

### 解説

* `#include <string.h>`は文字列を扱うのに便利な関数を利用するために読み込んだ（今回は`strlen`を使った）

* `input[200]`には最大`199文字`まで格納できる（末尾にヌル文字（`\0`）が入るから）

* `strlen`関数は文字列の長さを取得する

* [アスキーコード一覧](http://www9.plala.or.jp/sgwr-t/c_sub/ascii.html)

* `%s`は**文字列**を、`%c`は**文字**を入出力する記号

## 提出用ソースコード

[ハイライトされたプログラム](./program.c)

[プログラムのみ](https://raw.githubusercontent.com/simochee/c-unit-recognition/master/natsumi/program.c)
