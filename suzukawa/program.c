#include <stdio.h>

int getLength(char *text)
{
    int i = 0;

    while(1)
    {
        if(text[i] == '\0')
        {
            break;
        }

        i++;
    }

    return i;
}

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

    str[length1 + length2] = '\0';
}

int main(void)
{
    char input1[100], input2[100];
    char str[200];

    printf("文字列１を入力してください：");
    scanf("%s", input1);

    printf("文字列２を入力してください：");
    scanf("%s", input2);

    linkString(input1, input2, str);

    printf("結果：%s\n", str);

    return 0;
}