#include<iostream>
using namespace std;
int main()
{
	int x, y, z;
	cout << "\t母鸡\t \t公鸡\t \t小鸡\t" << endl;
	//“\t"应该是title 的意思
	for (x = 0; x <= 33; x++)
	for (y = 0; y <= 50; y++)
	{
		z = 100 - x - y;
 		if ((3 * x + 2 * y + 0.5*z) == 100)
				cout << "\t" << x << "\t\t"<< y << "\t\t" << z << endl;
		//这里输出的是一整行x的数值、y的数值、z的数值
	}
	return 0;
}