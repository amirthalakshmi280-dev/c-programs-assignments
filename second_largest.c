
#include <stdio.h>

int main() {
    int a[100], n, i;
    int largest, second;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 2 || n > 100) {
        printf("Invalid array size\n");
        return 0;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    second = a[0];
    
    for (i = 1; i < n; i++) {
        if (a[i] > largest) {
            second = largest;
            largest = a[i];
        } else if (a[i] < largest &&
                   (second == largest || a[i] > second)) {
            second = a[i];
        }
    }

    if (second == largest)
        printf("No second-largest distinct element\n");
    else
        printf("Second largest element: %d\n", second);

    return 0;
}
Enter array size: 5
Enter array elements: 10 25 8 40 15
Second largest element: 25
