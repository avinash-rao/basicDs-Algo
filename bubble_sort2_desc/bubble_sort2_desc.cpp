#include <iostream>
using namespace std;

void display_arr(int arr[], int n)
{
	int i;
	for(i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void bubbleSort(int a[], int n)
{
	int i,j,temp;
	for(i = 0; i < n-1; i++)
	{
		for(j = 0; j < n-i-1; j++)
		{
			if(a[j] < a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

int main()
{
	int arr[] = {34,12,43,23,76,2,7,23};
	int n = sizeof(arr)/sizeof(int);
	
	cout << "----------Bubble Sort----------" << endl << endl;
	
	cout << "Before Sorting: ";
	display_arr(arr, n);
	
	bubbleSort(arr, n);
	
	cout << "After Sorting: ";
	display_arr(arr, n);
}