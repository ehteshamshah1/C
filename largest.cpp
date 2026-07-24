#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "How many numbers: ";
	cin >> n;
	
	int arr[n];
	
	for(int i = 0; i < n; i++)
	{
		cout << "Enter " << i+1 << " number: " << endl;
		cin >> arr[i];
	}
	
	int largest = arr[0];
	int smallest = arr[0];
	
	for(int i = 1; i < n; i++)
	{
		if (arr[i] > largest)
		{
			largest = arr[i];
		}
		
		if (arr[i] < smallest)
		{
			smallest = arr[i];
		}
	}
	
	cout << "Largest number = " << largest << endl;
	cout << "Smallest number = " << smallest << endl;
	
	return 0;
}
