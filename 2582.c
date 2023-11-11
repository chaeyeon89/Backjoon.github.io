#include <stdio.h>

int main() {
    int numbers[10];
    int sum = 0;
    int count[100] = {0}; // 최빈값을 계산하기 위한 배열

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
        count[numbers[i] / 10]++;
    }

    int average = sum / 10;
    int mode_value, max_count = 0;

    for (int i = 0; i < 100; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            mode_value = i * 10;
        }
    }

    printf("%d\n", average);
    printf("%d\n", mode_value);

    return 0;
}
