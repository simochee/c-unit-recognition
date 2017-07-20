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

    length1 = getLength(str1);

    for(i = 0; i < length1; i++)
    {
        str[i] = str1[i];
    }

    length2 = getLength(str2);

    for(i = 0; i < length2; i++)
    {
        str[i + length1] = str2[i];
    }

    // strの末尾にヌル文字を挿入
    str[length1 + length2] = '\n';
}

int main(void)
{
    // 入力される文字列を格納する
    char input1[100], input2[100];
    // 連結された文字列を格納する
    char str[200];

    printf("文字列１を入力してください：");
    scanf("%s", input1);

    printf("文字列２を入力してください：");
    scanf("%s", input2);

    linkString(input1, input2, str);

    printf("結果：%s\n", str);

    return 0;
}