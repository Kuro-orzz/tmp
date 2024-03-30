// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int year = n / 365;
    n -= year * 365;
    int week = n / 7;
    n -= week * 7;
    int day = n;
    printf("%d %d %d", year, week, day);
    return 0;
}
