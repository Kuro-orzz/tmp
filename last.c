#include <stdio.h>
#include <stdlib.h>

struct node{
    int val;
    int pos;
};

void quickSort(struct node a[], int l, int r){
	int p = a[(l+r)/2].val;
	int i = l, j = r;
	while (i < j){
		while (a[i].val < p){
			i++;
		}
		while (a[j].val > p){
			j--;
		}
		if (i <= j){
			int temp = a[i].val;
			int pos = a[i].pos;
			a[i].val = a[j].val;
			a[i].pos = a[j].pos;
			a[j].val = temp;
			a[j].pos = pos;
			i++;
			j--;
		}
	}
	if (i < r)
		quickSort(a, i, r);
	if (l < j)
		quickSort(a, l, j);
}

int main() {
    int T; scanf("%d", &T);
    while(T--){
        int n; scanf("%d", &n);
        struct node a[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i].val);
            a[i].pos = i;
        }
        quickSort(a, 0, n);
        int ans = -1;
        int pos = 1000000;
        for(int i = 1; i < n; i++){
            if(a[i].val == a[i-1].val){
                if(pos > a[i-1].pos){
                    ans = a[i-1].val;
                    pos = a[i-1].pos;
                }
                if(pos > a[i].pos){
                    ans = a[i].val;
                    pos = a[i].pos;
                }
            }
        }
        if(ans == -1)
            printf("NO\n");
        else
            printf("%d\n", ans);
    }

    return 0;
}
