#include <stdio.h>
#include <stdlib.h>

void input(int *p, int k) {
    int i;
    for(i = 0; i < k; i++) {
        scanf("%d", &p[i]);
    }
}

int fun(int *x, int *y, int n, int m) {
    int i, j;

    for (i = 0; i <= n - m; i++) {
        for (j = 0; j < m; j++) {
            if (x[i + j] != y[j]) {
                break;
            }
        }
        if (j == m) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int n, m, sw = 0;
    int *p1, *p2;

    scanf("%d %d", &n, &m);
    p1 = (int *)malloc(sizeof(int) * n);
    p2 = (int *)malloc(sizeof(int) * m);

    input(p1, n);
    input(p2, m);

    sw = fun(p1, p2, n, m);

    if (sw == 0) {
        printf("No\n");
    } else {
        printf("Yes\n");
    }

    free(p1);
    free(p2);

    return 0;
}