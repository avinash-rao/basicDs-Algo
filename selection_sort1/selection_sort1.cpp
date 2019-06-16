#include <iostream>
using namespace std;

void selectionSort(int[],int);
void display_arr(int arr[], int n);

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

void display_arr(int arr[], int n)
{
	int i;
	for(i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void selectionSort(int a[], int n)
{
	int i,j,temp,min_idx;
	
	for(i = 0; i < n-1; i++)
	{
		min_idx = i;
		for(j = i+1; j < n; j++)
		{
			if(a[j] < a[min_idx])
				min_idx = j;
		}
		temp = a[i];
		a[i] = a[min_idx];
		a[min_idx] = temp;
	}
}