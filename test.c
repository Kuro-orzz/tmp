#include <stdio.h>
#include <math.h>

int main() {
    int a[3], b[3];
    for(int i = 0; i < 3; i++){
        scanf("%d%d", &a[i], &b[i]);
        if(a[i] < b[i]){
            int tmp = a[i];
            a[i] = b[i];
            b[i] = tmp;
        }
    }
    int m = a[0];
    int pos = 0;
    for(int i = 1; i < 3; i++){
        if(a[i] > m){
            m = a[i];
            pos = i;   
        }
    }
    int t = 0;
    for(int i = 0; i < 3; i++){
        if(i != pos){
            if(a[i] + b[pos] == m)
                t += b[i];
            else if(b[i] + b[pos] == m)
                t += a[i];
            else{
                printf("NO");
                return 0;
            }
        }
    }
    if(m == t)
        printf("YES");
    else
        printf("NO");
    return 0;
}
