#include <iostream>
using namespace std;

void display_arr(int[], int);

int main()
{
	int arr[] = {34,12,43,23,76,2,7,23};
	int n = sizeof(arr)/sizeof(int);
	
	int temp;
	
	cout << "----------Bubble Sort----------" << endl << endl;
	
	cout << "Before Sorting: ";
	display_arr(arr,n);
	
	//Bubble Sort
	for(int i = n-1; i >= 0; i++)
	{
		for(int j = 0; j < i-1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
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