#include<iostream>
using namespace std;
int main()
{	
	float weight = 0, height = 0, healthRate = 0;
	cin >> weight >> height;//���ص�λ��Kg����ߵ�λ��m
	healthRate = weight / (height*height);
	if ((18.5 <= healthRate) && (healthRate <= 23.9))
	cout << "��������" <<" "<<healthRate << endl;
	else if ((23.9 < healthRate) && (healthRate <= 27.9))
	cout << "���أ�ע�����" << " " << healthRate << endl;
	else if ((27.9 < healthRate) && (healthRate <= 35.9))
	cout << "���֣����ʣ�" << " " << healthRate << endl;
	else if ((35.9 < healthRate) && (healthRate <= 45.9))
	cout << "�ضȷ��֣������" << " " << healthRate<< endl;
	else
		cout << "��ֱ��סԺ���ư�" << endl;
	return 0;
}