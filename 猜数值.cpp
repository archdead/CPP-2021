#include<iostream>
using namespace std;
int main()
{
	char a = ' ';//���ڴ���û��������ĸ
	cout << "�²������ĸ���ĸ�������Σ��ƣ�" << endl;
	int i = 0;//���ڼ�¼���˶��ٴ���
	for (i = 0; i < 5; i++)
	{
		cin >> a;
		if (a == 'G')
		{
			cout << "���ţ�ƣ���������!" << endl;
			break;//��ֹѭ��
		}
		else  //��Ȼ�Ļ�
			cout << "��´��ˣ��ٴ�����߹�ģ�" << endl;
	}
	return 0;
		 
}