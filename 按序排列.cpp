#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	char a[10] = { 'a','b','c','d','e','f','g','h','i','j'};
	//char �ַ�������ĸ�ŵ���Ӧ�������ռ���ȥ 
	cout << "��ĸ�������Ϊ������ǰ��λ֮ĸ��" << endl;
	for (i = 0; i < 10; i = i + 2)
	{
		cout << a[i]<<endl;
	}

	return 0;
}