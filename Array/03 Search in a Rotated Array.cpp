#include <stdio.h>

int searchInRotatedArray(int arr[], int low, int high, int key)
{
	if (low > high)
		return -1;

	int mid = (low + high) / 2;
	
	if (arr[mid] == key)
		return mid;

	if (arr[low] <= arr[mid]) {
		
		if (key >= arr[low] && key <= arr[mid])
			return searchInRotatedArray(arr, low, mid - 1, key);
			
		return searchInRotatedArray(arr, mid + 1, high, key);
	}

	if (key >= arr[mid] && key <= arr[high])
		return searchInRotatedArray(arr, mid + 1, high, key);

	return searchInRotatedArray(arr, low, mid - 1, key);  //  55, 11, 22, 33, 44 
}

int main()
{
	int arr[] = { 55, 66, 77, 88, 99, 11, 22, 33, 44 };
	int n = 9;
	int key = 77;
	int flag = searchInRotatedArray(arr, 0, n - 1, key);

	if (flag == -1)
		printf("\nKey is not present");
	else
		printf("\nKey is present at index no. %d",flag);
}
