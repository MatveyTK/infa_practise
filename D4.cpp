#include<iostream>
using namespace std;
int main()
{
	int N, sum = 0, a[N];
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		a[i] = 1 + i;
	}
	for (int i = 0; i < N; i++)
	{
		sum += a[i];
	}
	cout << sum;
	return 0;
}
