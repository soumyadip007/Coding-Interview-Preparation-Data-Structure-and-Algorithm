#include <stdio.h>

void traverse(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
void rightRotatebyOneMove(int arr[], int n)
{
    int temp = arr[n-1], i;
    for (i = n-1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = temp;
}

void rightRotate(int arr[], int d, int n)
{
    int i;
    for (i = 0; i < d; i++){
    	rightRotatebyOneMove(arr, n);
    	printf("\nMove no. %d : ",i+1);
    	traverse(arr, n);
	}   
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n=10;
    rightRotate(arr, 5, n);
    printf("\nFinal Array : ");
    traverse(arr, n);
    return 0;
}
