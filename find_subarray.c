#include <stdio.h>

void readarray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void printarray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void find_subarray(int arr[], int n, int m)
{
    int start = 0;
    int current_sum = 0;
    for (int end=0;end<n;end++)
    {
        current_sum = current_sum + arr[end];

       while (current_sum>m && start<=end)
       {
            current_sum =current_sum - arr[start];
            start++;
        }
        if (current_sum==m)
        {
            printf("Subarray found between  %d and %d\n", start, end);
            return;
        }
    }
    printf("No subarray with the given sum found\n");
}

int main()
{
    int n,k,m;
    int arr[100];

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    readarray(arr, n);

    printf("Enter the sum: ");
    scanf("%d", &m);

    printf("The original array is: ");
    printarray(arr, n);

    find_subarray(arr,n,m);

    return 0;
}
