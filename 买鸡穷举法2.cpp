#include<iostream>
using namespace std;
int main()
{
	int x, y, z;
	cout << "\tĸ��\t \t����\t \tС��\t" << endl;
	//��\t"Ӧ����title ����˼
	for (x = 0; x <= 33; x++)
	for (y = 0; y <= 50; y++)
	{
		z = 100 - x - y;
 		if ((3 * x + 2 * y + 0.5*z) == 100)
				cout << "\t" << x << "\t\t"<< y << "\t\t" << z << endl;
		//�����������һ����x����ֵ��y����ֵ��z����ֵ
	}
	return 0;
}