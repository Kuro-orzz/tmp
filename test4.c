#include <stdio.h>

int main() {
    long long int a, b;
    scanf("%lld%lld", &a, &b);
    if(b == 0){
        printf("%d", 0);
        return 0;
    }
    printf("%lld ", a+b);
    printf("%lld ", a-b);
    printf("%lld ", a*b);
    printf("%0.2f ", 1.0*a/b);
    printf("%lld\n", a%b);
    return 0;
}
