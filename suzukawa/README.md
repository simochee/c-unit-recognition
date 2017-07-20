# ２つの文字列を連結するプログラム

## もくじ

<!-- TOC -->

- [２つの文字列を連結するプログラム](#２つの文字列を連結するプログラム)
    - [もくじ](#もくじ)
    - [プログラムに用いた要素](#プログラムに用いた要素)
    - [実行結果](#実行結果)
    - [コメント付きプログラム](#コメント付きプログラム)
        - [解説](#解説)
    - [提出用ソースコード](#提出用ソースコード)

<!-- /TOC -->

## プログラムに用いた要素

* 繰り返し
* 文字列
* 関数

## 実行結果

```
文字列１を入力してください：hello
文字列２を入力してください：world
結果：helloworld
```

> ※ `scanf`の仕様により入力にスペースは使用できない（一応うまくいくけど結果がおかしくなる）

```
文字列１を入力してください：hello world
文字列２を入力してください：結果：helloworld
```

## コメント付きプログラム

```c
#include <stdio.h>

/**
 * 文字列の長さを取得する関数
 */
int getLength(char *text)
{
    int i = 0;

    // 無限ループ
    while(1)
    {
        // ヌル文字までいくとループから抜ける
        if(text[i] == '\0')
        {
            break;
        }

        i++;
    }

    // iの値を返却する
    return i;
}

/**
 * 文字列どうしを連結する関数
 * 引数 ( 前半の文字列 , 後半の文字列 , 連結された文字列を格納する文字列 )
 */
void linkString(char *str1, char *str2, char *str)
{
    int i, length1, length2;

    // 前半の文字列の長さを取得
    length1 = getLength(str1);

    for(i = 0; i < length1; i++)
    {
        // 文字を入れて行く
        str[i] = str1[i];
    }

    // 後半の文字列の長さを取得
    length2 = getLength(str2);

    for(i = 0; i < length2; i++)
    {
        // 前半の文字列の長さ + iの場所に文字を入れていく
        str[i + length1] = str2[i];
    }

    // strの末尾にヌル文字を挿入
    str[length1 + length2] = '\0';
}

int main(void)
{
    // 入力される文字列を格納する
    char input1[100], input2[100];
    // 連結された文字列を格納する
    char str[200];

    // 前半の文字列を入力
    printf("文字列１を入力してください：");
    scanf("%s", input1);

    // 後半の文字列を入力
    printf("文字列２を入力してください：");
    scanf("%s", input2);

    // 文字を結合
    linkString(input1, input2, str);

    // 結果を出力
    printf("結果：%s\n", str);

    return 0;
}
```

### 解説

* `while(1)`はカッコの中が常に`1`なので（当たり前）無限にループする

* `getLength`について、文字列の最後には必ずヌル文字`\0`があるから、そこまでの文字数をカウントすれば文字の長さがわかる

* 【余談】`getLength`は`strlen( String )`関数で代用できる

```c
#include <string.h>

strlen("hello"); // => 5
// == getLength("hello")
```

* 【余談】`linkString`は以下のプログラムで代用できる

```c
#include <string.h>

char str[100];
char str1[50] = "hello";
char str2[50] = "world";

strcpy(str, str1); // strにstr1の内容をコピーする
strcat(str, str2); // strの後ろにstr2の内容を繋げる 
// == linkString(str1, str2, str)
```

* 【余談】上の２つは`string.h`というヘッダを読み込む必要がある（`#include <string.h>`）

## 提出用ソースコード

[ハイライトされたプログラム](./program.c)

[プログラムのみ](https://raw.githubusercontent.com/simochee/c-unit-recognition/master/suzukawa/program.c)
