#include<iostream>
using namespace std;
int main()
{
	int a[10];//���ڴ�����������
	int i = 0, j = 0;//����ʼֵ
	int temp = 0;//��ʱ���������ڽ�������
	for (i = 0; i < 10; i++)
		cin >> a[i];//����ʮ������������
	for (i = 0; i < 9; i++)//�ӵ�i�����ݿ�ʼѡ��������
	{
		for (j = i + 1; j < 10; j++)//�ӵ�i+1��ʼ������Ѱ�ұ�i���������
		{
			if (a[j] > a[i])//���жϣ����i+1 ��i�󣬾ͽ��л���
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++)//������յ�������
		cout << a[i] << " ";
		return 0;

}