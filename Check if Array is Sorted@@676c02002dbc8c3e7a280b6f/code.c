#include <stdio.h>

int main() {
    int n, sorted = 1;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            sorted = 0;
            break;
        }
    }
    
    if (sorted) {
        printf("Sorted");
    } else {
        printf("Not Sorted");
    }
    
    return 0;
}





