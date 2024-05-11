#include <stdio.h>
#include <stdlib.h>

int main() {
    int T; scanf("%d", &T);
    while(T--){
        int n, m, p; scanf("%d%d%d", &n, &m, &p);
        int a[n];
        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        int b[m];
        for(int i = 0; i < m; i++)
            scanf("%d", &b[i]);
        for(int i = 0; i < p; i++)
            printf("%d ", a[i]);
        for(int i = 0; i < m; i++)
            printf("%d ", b[i]);
        for(int i = p; i < n; i++)
            printf("%d ", a[i]);
    }
    return 0;
}
