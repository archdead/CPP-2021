#include<iostream>
using namespace std;
int main()
{
	float a = 0, b = 0, temp = 0;
	cout << "imput a and b:" << endl;
	cin >> a >> b;
	cout << "a=" << a << ",b=" << b << endl;
	//"<<"�����Ǹ��߽磬�ַ��������ĸ�<<���ֵ��ֱ�Ӵ��ݵ���Ļ�ϣ�����ͽ�a��ֵ����"a=" ��b��ֵ����",b="���ٻ��С�
	temp = a; a = b; b = temp;
	//����ֵa������ʱ�������ٽ�b��ֵ����a������ٽ���ʱ������ֵ����b��Ҳ����˵������ʱ������ABֵ����
		cout << "a=" << a<<",b=" << b << endl;
	return 0;
}