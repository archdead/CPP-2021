#include<iostream>
using namespace std;
int main()
{
	int nCases, i, nfeet;
		cin >> nCases;
	for(i=0;i<nCases;i++)
	{
		cin >> nfeet;
		if (nfeet % 2 != 0)
			cout << "���󣡲���Ϊ����" << endl;
		else if (nfeet % 4 != 0)
			cout <<"������Ϊ��"<< nfeet / 4 + 1 <<""<< endl <<"�����Ϊ��"<< nfeet / 2 << endl;
		else
			cout <<"������Ϊ��"<< nfeet / 4 <<""<< endl << "�����Ϊ��" << nfeet / 2 << endl;
	}
	return 0;
}