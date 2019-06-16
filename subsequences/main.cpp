#include <iostream>
#include <math.h>
using namespace std;

int subsequences(string input, string output[]) {
	if(input.empty()) {
		output[0] = "";
		return 1;
	}
	string smallString = input.substr(1);
	int smallOutputSize = subsequences(smallString, output);
	for(int i=0; i < smallOutputSize; i++) {
		output[i + smallOutputSize] = input[0] + output[i];
	}
	return 2*smallOutputSize;
}

int main()
{
	string input;
	
	cout << "Enter a string: ";
	cin >> input;
	
	string* output = new string[1000];
	
	int n = subsequences(input, output);
	
	for(int i=0; i<n; i++) {
		cout << output[i] << endl;
	}
	
}