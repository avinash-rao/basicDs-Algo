#include <iostream>
using namespace std;

int main()
{
	int a[] = {2,4,5,6,12,23,34,45,67,68,69,77};
	int n = sizeof(a)/sizeof(int);
	int loc = -1,item,mid;
	
	cout << "Enter element to search: ";
	cin >> item;
	
	// Binary Search
	int low = 0;
	int high = n-1;
	while(low <= high)
	{
		mid = (low + high)/2;
		
		if(item == a[mid])
		{
			loc = mid;
			break;
		}
		
		else if(item < a[mid])
			high = mid-1;
			
		else if(item > a[mid])
			low = mid + 1;
	}
	
	if(loc == -1)
		cout << "Element not present";
	else
		cout << item << " is present at location: " << loc+1 << endl;
}
