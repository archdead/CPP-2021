#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num, count[10] = { 0 };
	for (int i = 0; i < 20; i++)
	{
		cin >> num;
		count[num]++;
	}
	for (int i = 0; i < 10; i++)
	{
		if (count[i] != 0)
			cout << i << "������" << count[i] << "��" << endl;
	}
	return 0;
}