# 文字列をランダムな並びのアルファベットと置き換えて暗号化するプログラム

## もくじ

<!-- TOC -->

- [文字列をランダムな並びのアルファベットと置き換えて暗号化するプログラム](#文字列をランダムな並びのアルファベットと置き換えて暗号化するプログラム)
    - [もくじ](#もくじ)
    - [プログラムに用いた要素](#プログラムに用いた要素)
    - [実行結果](#実行結果)
    - [コメント付きプログラム](#コメント付きプログラム)
        - [解説](#解説)
    - [提出用ソースコード](#提出用ソースコード)

<!-- /TOC -->

## プログラムに用いた要素

* 繰り返し
* 関数
* 配列

## 実行結果

```
[1] 86
[2] 74
[3] 57
[4] 61
[5] 95
[6] 83
[7] 88
[8] 64
[9] 98
[10] 77
平均点：78.3
最高点：98
```

## コメント付きプログラム

```c
/**
 * 平均点と最高点を求めるプログラム
 */
#include <stdio.h>

/**
 * 点数を入力して配列に格納する関数
 */
void inputScores(int *scores)
{
    int i;

    for(i = 0; i < 10; i++)
    {
        printf("[%d] ", i + 1);
        scanf("%d", &scores[i]);
    }
}

/**
 * １０個の点数から平均点を求める関数
 */
double average(int *scores)
{
    int sum = 0, i;

    // 合計点を求める
    for(i = 0; i < 10; i++)
    {
        sum = sum + scores[i];
    }

    // 合計点を個数で割る
    return (double)sum / 10;
}

/**
 * １０個の点数の最高点を求める関数
 */
int maximum(int *scores)
{
    // maxにはscoresの最初の要素を代入しておく
    int max = scores[0], i;

    // 最初の要素は代入されているから i=1 から
    for(i = 1; i < 10; i++)
    {
        // 現在のmaxよりscoresの要素の方が大きければmaxを更新
        if(scores[i] > max)
        {
            max = scores[i];
        }
    }

    return max;
}

int main(void)
{
    int scores[50], max;
    double ave;

    // 点数を入力して scores に格納
    inputScores(scores);

    // 平均点を求める
    ave = average(scores);

    // 最高点を求める
    max = maximum(scores);

    // 結果を出力
    printf("平均点：%.1f\n", ave);
    printf("最高点：%d\n", max);
    
    return 0;
}
```

### 解説

* `average`関数内で`(double)sum`としているのは、`int / int`は`int`型となるので、小数点以下が取得されないから

    * `double / int`では`double`型になるので小数点以下も取得できる

## 提出用ソースコード

[ハイライトされたプログラム](./program.c)

[プログラムのみ](https://raw.githubusercontent.com/simochee/c-unit-recognition/master/tokuda/program.c)
