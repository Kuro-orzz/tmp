#include <stdio.h>


long long kadane(int arr[], int n) {
    long long sum = 0;
    long long ans = arr[0];
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(ans < sum)
            ans = sum;
        if(sum < 0)
            sum = 0;
    }
    return ans;
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N);

        int arr[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }

        long long result = kadane(arr, N);
        printf("%lld\n", result);
    }

    return 0;
}
