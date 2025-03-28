#include <stdio.h>

void count_frequency(int a[], int n) {
    int freq[1001] = {0};

    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
    }   
    for (int i = 0; i < n; i++) {
        if (freq[a[i]] != 0) {
            printf("%d %d\n", a[i], freq[a[i]]);
            freq[a[i]] = 0;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    count_frequency(a, n);
    return 0;

}
