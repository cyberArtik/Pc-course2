#include<stdio.h>
#include<time.h>

void oddSum(int array[], int num)
    {
        int sum = 0;
        for(int i = 0; i < num; i++){
            if (array[i] % 2!= 0){
                sum += array[i];
            }
        }
      printf("%d", sum);
    }
int main()
    {


        int n;
        printf("Enter the number of elements (n>50): ");
        restart:
        scanf("%d", &n);
        if (n<=50) {
            goto restart;
        }
        int array_1[n], array_2[n];

        printf("Array 1: ");
        for(int i = 0; i < n; i++){
            scanf("%d", &array_1[i]);
        }

        printf("Array 2: ");
        for(int i = 0; i < n; i++){
            scanf("%d", &array_2[i]);
        }

    clock_t start_time, end_time;
    double cpu_time_used;

    start_time = clock();

        printf("Easy Task Sum Of Odd Numbers: ");
        oddSum(array_1, n);

    end_time = clock();
    cpu_time_used = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    printf("\n Time taken to calculate the sum of odd numbers: %.6f seconds\n", cpu_time_used);
    return 0;

    }
