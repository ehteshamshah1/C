#include <iostream>
using namespace std;

int main()
{
	cout << "Table 1-20 \n" << endl; 
	
	for(int i=1; i<=20; i++)
	{
		cout << "Table of " << i << endl;
		for(int j=1; j<=10; j++)
		{
		cout << i << " x " << j	<< " = " << i*j << endl;
		}
		cout << endl;
	}
}
