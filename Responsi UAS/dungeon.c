#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

 int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            int light = 0;
            for (int j = i - k; j <= i + k; j++) {
                if (j >= 0 && j < n && a[j] == 1) {
                    light = 1;
                    break;
                }
            }
            if (light == 0) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}