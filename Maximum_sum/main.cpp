#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n)
{
	int i,j,key;
	
	for(i = 1; i < n; i++)
	{
		j = i-1;
		key = a[i];
		
		while( j >= 0 && a[j] > key )
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
}


int main() {
    
    int a[1000], n, i, max_sum;
    cin >> n;
    
    for(i = 0; i < n; i++)
        cin >> a[i];
	
    // Sort the array
    insertionSort(a,n);
    
    max_sum = a[--n];
    // Find out maximum sum
    while(n>=0 && a[--n] > 0)
        max_sum += a[n];
    
    cout << max_sum;
}