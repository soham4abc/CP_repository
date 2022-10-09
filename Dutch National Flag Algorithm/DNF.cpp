/*
Dutch National Flag Algorithim is use to sort an array containing only elements of 0,1,2.
eg:
arr[]={1,0,2,1,0,1,0,2,1,0,1,0}
after sorting the array will become
arr[]={0,0,0,0,0,1,1,1,1,1,2,2}
*/

#include <bits/stdc++.h>
using namespace std;
void sort012(int a[], int arr_size)
{
	int start=0;
	int end = arr_size - 1;
	int mid = 0;

	// Iterate till all the elements
	// are sorted
	while (mid <= hi) {
		switch (a[mid]) {

		// If the element is 0
		case 0:
			swap(a[lo++], a[mid++]);
			break;

		// If the element is 1 .
		case 1:
			mid++;
			break;

		// If the element is 2
		case 2:
			swap(a[mid], a[hi--]);
			break;
		}
	}
}

// Function to print array arr[]
void printArray(int arr[], int arr_size)
{
	// Iterate and print every element
	for (int i = 0; i < arr_size; i++)
		cout << arr[i] << " ";
}

// Driver Code
int main()
{
	int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);

	sort012(arr, n);

	printArray(arr, n);

	return 0;
}
