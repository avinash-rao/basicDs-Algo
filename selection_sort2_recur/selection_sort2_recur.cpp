#include <iostream>
using namespace std;

void selectionSort(int a[], int n, int index=0);
void display_arr(int arr[], int n);
int minIdx(int[], int, int);
void swap(int*, int*);

int main()
{
	int arr[] = {34,12,43,23,76,2,7,23};
	int n = sizeof(arr)/sizeof(int);
	
	cout << "----------Selection Sort----------" << endl << endl;
	
	cout << "Before Sorting: ";
	display_arr(arr,n);
	
	selectionSort(arr,n);
	
	cout << "After Sorting: ";
	display_arr(arr,n);
}

void selectionSort(int a[], int n, int index)
{
	if(index == n)
		return;
		
	int k = minIdx(a, n, index);
	
	swap(&a[index], &a[k]);
	
	selectionSort(a, n, index+1);
}

void display_arr(int arr[], int n)
{
	int i;
	for(i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int minIdx(int a[], int n, int i)
{
	int min_idx = i;
	for(int j = i+1; j<n; j++)
	{
		if(a[j] < a[min_idx])
			min_idx = j;
	}
	return min_idx;
}

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}