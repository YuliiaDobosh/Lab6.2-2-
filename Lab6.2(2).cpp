#include <iostream>
using namespace std;
void Input(int* a, const int size, int i)
{
	cout << "a[" << i << "] = ";
	cin >> a[i];

	if (i < size - 1)
		Input(a, size, i + 1);
	else
		cout << endl;
}
int Max(int* a, const int size, int i, int max)
{
	if (a[i] > max)
		max = a[i];
	if (i < size - 1)
		return Max(a, size, i + 1, max);
	else
		return max;
}
int Min(int* a, const int size, int i, int min)
{
	if (a[i] < min)
		min = a[i];
	if (i < size - 1)
		return Min(a, size, i + 1, min);
	else
		return min;
}

int main()
{
	int n;
	cout << "n = "; cin >> n;
	int* a = new int[n];
	Input(a, n, 0);
	cout << "max = " << Max(a, n, 1, a[0]) << endl;
	cout << "min = " << Min(a, n, 1, a[0]) << endl;
	return 0;
}

