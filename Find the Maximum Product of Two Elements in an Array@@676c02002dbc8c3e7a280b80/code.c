#include <stdio.h>

int maxProduct(int arr[], int n) {
    if (n < 2) {
        return -1; // Not enough elements to form a product
    }
    
    int product = arr[0] * arr[1];

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] * arr[j] > product) {
                product = arr[i] * arr[j];
            }
        }
    }

    return product;
}

int main() {
    int n;
    scanf("%d", &n);

    if (n < 2) {
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int res = maxProduct(arr, n);
    printf("%d", res);

    return 0;
}
