#include <stdio.h>

int main() {
    int n;

    // Read
    printf("Enter the number of elements (n>50): ");
    scanf("%d", &n);

    int arr[n];

      // We go through the array`s elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    int lastMinNeg = -1; // We initialize to -1 to check if we found any negative minimum
    int firstMaxNeg = -1; // We initialize to -1 to check if we found any negative maximum

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (lastMinNeg == -1 || arr[i] <= arr[lastMinNeg]) {
                lastMinNeg = i;
            }
            if (firstMaxNeg == -1 || arr[i] >= arr[firstMaxNeg]) {
                firstMaxNeg = i;
            }
        }
    }

    // We check if we found a negative minimum and a negative maximum
    if (lastMinNeg != -1) {
        printf("The last minimal negative element: %d, position: %d\n", arr[lastMinNeg], lastMinNeg);
    } else {
        printf("There are no negative elements in the array.\n");
    }

    if (firstMaxNeg != -1) {
        printf("The first maximum negative element: %d, position: %d\n", arr[firstMaxNeg], firstMaxNeg);
    } else {
        printf("There are no negative elements in the array.\n");
    }

    return 0;
}
