#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int sum = 0, a[100] = { 0 };
	for (int i = 2; i < sqrt(100.0); i++)
	{
		sum = i;
		while (sum < 100)
		{
			sum = sum + i;
			if (sum < 100)a[sum] = 1;//如果这个值小于100，就剔除掉
		}
	}
	for (int i = 2; i < 100; i++)
	{
		if (a[i] == 0)cout << i << " ";
	}
	return 0;
}
