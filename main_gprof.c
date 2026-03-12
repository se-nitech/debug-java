#include <stdio.h>

#define SIZE 2026
#define REPEAT 2000

int sum_array(const int *a, int size)
{
    int i, total = 0;
    for (i = 0; i < size; i++)
        total += a[i];
    return total;
}

int average(const int *a, int size)
{
    return sum_array(a, size) / size;
}

int count_above_average(const int *a, int size)
{
    int i, count = 0;
    for (i = 0; i < size; i++)
        if (a[i] > average(a, size))
            count++;
    return count;
}

int count_above_average_fast(const int *a, int size)
{
    int i, count = 0;
    int avg = average(a, size);
    for (i = 0; i < size; i++)
        if (a[i] > avg)
            count++;
    return count;
}

int main(void)
{
    int a[SIZE];
    int i, total = 0;

    for (i = 0; i < SIZE; i++)
        a[i] = (i * 17) % 100; /* 規則的な値で配列を初期化 */

    /* 平均より大きい要素の数を数える（遅いバージョン） */
    for (i = 0; i < REPEAT; i++)
        total += count_above_average(a, SIZE);

    printf("total=%d\n", total / REPEAT);

    /* 平均より大きい要素の数を数える（高速バージョン） */
    total = 0;
    for (i = 0; i < REPEAT; i++)
        total += count_above_average_fast(a, SIZE);

    printf("total=%d\n", total / REPEAT);

    return 0;
}
