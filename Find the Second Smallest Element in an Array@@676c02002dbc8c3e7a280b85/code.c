#include <stdio.h>

int find_second_smallest(int arr[], int n) {
    if (n < 2) {
        return -1; // Not enough elements
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    int smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > smallest) {
            return arr[i]; 
        }
    }
    return -1; 
}

int main() {
    int n;
    scanf("%d", &n);
    
    if (n < 2) {
        printf("-1");
        return 0;
    }
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int second_smallest = find_second_smallest(arr, n);
    if (second_smallest != -1) {
        printf("%d\n", second_smallest);
    }else{
        printf("-1");
    }
    
    return 0;
}
