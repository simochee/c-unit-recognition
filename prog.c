#include <stdio.h>

void age(int age, int weight) {
    printf("私は%d歳です。体重は%dkgです\n", age, weight);
}

int main(void) {
    
    age(100, 20);

    return 0;
}