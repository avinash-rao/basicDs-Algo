#include <iostream>
using namespace std;

int binarySearch(int a[], int item, int low, int high);

int main()
{
	int a[] = {2,4,5,6,12,23,34,45,67,68,69,77};
	int n = sizeof(a)/sizeof(int);
	int loc,item;
	
	cout << "Enter element to search: ";
	cin >> item;
	
	loc = binarySearch(a, item, 0, n-1);
	
	if(loc == -1)
		cout << "Element not present" << endl;
	else
		cout << item << " is present at location: " << loc+1 << endl;
}

int binarySearch(int a[], int item, int low, int high)
{
	if(low > high)
		return -1;
	
	int mid = (low + high)/2;
	
	if(item == a[mid])
		return (mid);
	
	else if(item < a[mid])
		binarySearch(a, item, low, mid-1);
		
	else if(item > a[mid])
		binarySearch(a, item, mid+1, high);
}