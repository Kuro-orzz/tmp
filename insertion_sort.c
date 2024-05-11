#include <stdio.h>

void insertion_sort(int arr[], int n) {
    int i, key, j;
    for (i = 0; i < n; i++) {
        if(arr[i-1] > arr[i]){
            key = arr[i];
            j = i-1;

            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }


        printf("Buoc %d:", i);
        for (int k = 0; k <= i; k++) {
            printf(" %d", arr[k]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf(" %d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf(" %d", &arr[i]);
    }


    insertion_sort(arr, n);

    return 0;
}
