#include <stdio.h>

void traverse(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void reverse(int arr[], int n)
{
    int start = 0 ;
    int end = n - 1 ;
    int i=1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++ ;
        end-- ;
        printf("\nPass no. %d : ",i++);
        traverse(arr,n);
    }
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n=10;
    reverse(arr, n);
    printf("\nFinal Array : ");
    traverse(arr, n);
    return 0;
}
