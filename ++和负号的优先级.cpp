#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i, j, k;
	i = 3;
	cout << -i++ << endl;//���-3����i��Ϊ4���� ����++�ţ����ȼ����ڸ��� �����š�{������ֻ���õ������ϣ��������ڱ��ʽ}
	cout << -++i << endl;//���-5��4��1����ȡ����i����Ϊ4�����ź�ǰ��++�ţ����ȼ�ͬ��������Ҫ�Ƚ����Ҳ�ļӼ���
	//cout << (-i)++ << endl;
	//cout << ++i++ << endl;
	return 0;
}