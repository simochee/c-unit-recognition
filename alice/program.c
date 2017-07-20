#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[150];
    int count[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i, str;

    printf("入力してください\n");
    scanf("%s", input);

    for(i = 0; i < strlen(input); i++)
    {
        str = input[i] - 97;
        count[str]++;
    }

    for(i = 0; i < 26; i++)
    {
        printf("%c : %d\n", i + 97, count[i]);
    }

    return 0;
}
