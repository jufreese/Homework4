#include<iostream>
#include <new>
using namespace std;

int main()
{
	int i, n;
	int * p;

	cout << "Please enter number of cities: ";
	cin >> i;

	p = new (nothrow) int[i];
		for (n = 0; n < i; n++)
		{
			cout << "Enter the population of city " << n + 1 << ": ";
			cin >> p[n];
		}
		for (n = 0; n < i; n++)
			cout << "City " << n + 1 << ": " << p[n] << endl;
	}
	return 0;
}
