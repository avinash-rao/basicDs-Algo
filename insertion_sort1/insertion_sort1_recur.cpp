#include <iostream>
using namespace std;

void insertionSort(int[], int);
void display_arr(int arr[], int n);

int main()
{
	int arr[] = {34,12,43,23,76,2,7,23};
	int n = sizeof(arr)/sizeof(int);
	
	cout << "----------Insertion Sort----------" << endl << endl;
	
	cout << "Before Sorting: ";
	display_arr(arr,n);
	
	insertionSort(arr,n);
	
	cout << "After Sorting: ";
	display_arr(arr,n);
}

void insertionSort(int a[], int n)
{
	// If array size is 1 or smaller, return.
	if(n<=1)
		return;
	
	insertionSort(a, n-1);
	
	int key = a[n-1];
	int j = n-2;
	
	while(j >= 0 && a[j] > key)
	{
		a[j+1] = a[j];
		j--;
	}
	a[j+1] = key;
}

void display_arr(int arr[], int n)
{
	int i;
	for(i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}