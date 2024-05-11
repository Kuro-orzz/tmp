#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; scanf("%d", &n);
    int a[n];
    int b[100000];
    for(int i = 0; i < 100000; i++)
        b[i] = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        b[a[i]]++;
    }
    int ans = 0;
    int v[n];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(b[a[i]] == 1){
            ans++;
            v[cnt] = a[i];
            cnt++;
        }
    }
    printf("%d\n", ans);
    for(int i = 0; i < cnt; i++)
        printf("%d ", v[i]);
    return 0;
}
