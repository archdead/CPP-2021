#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int sum = 0, a[100] = { 0 };
	for (int i = 2; i < 100; i++)
	{
		sum = i;
		while (sum < 100)
		{
			sum = sum + i;
			if (sum < 100)a[sum] = 1;//如果该数是 i的倍数，就从数组中删除该数
		}
	}
	for (int i = 2; i < 100; i++)
	{
		if (a[i] == 0)cout << i << " ";
	}
		return 0;
}