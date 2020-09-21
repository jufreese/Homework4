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
	if (p == nullptr)
		cout << "Error: memory could not be allocated";
	else
	{
		for (n = 0; n < i; n++)
		{
			cout << "Enter the population of city " << n + 1 << ": ";
			cin >> p[n];
		}


		for (n = 0; n < i; n++)
			cout << "City " << n + 1 << ": " << p[n] << endl;

		delete[] p;

	}
	return 0;
}
