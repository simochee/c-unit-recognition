#include <stdio.h>

void inputScores(int *scores)
{
    int i;

    for(i = 0; i < 10; i++)
    {
        printf("[%d] ", i + 1);
        scanf("%d", &scores[i]);
    }
}

double average(int *scores)
{
    int sum = 0, i;

    for(i = 0; i < 10; i++)
    {
        sum = sum + scores[i];
    }

    return (double)sum / 10;
}

int maximum(int *scores)
{
    int max = scores[0], i;

    for(i = 1; i < 10; i++)
    {
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

    inputScores(scores);

    ave = average(scores);

    max = maximum(scores);

    printf("平均点：%.1f\n", ave);
    printf("最高点：%d\n", max);
    
    return 0;
}