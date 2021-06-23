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
			cout << "错误！不能为奇数" << endl;
		else if (nfeet % 4 != 0)
			cout <<"腿最少为："<< nfeet / 4 + 1 <<""<< endl <<"腿最多为："<< nfeet / 2 << endl;
		else
			cout <<"腿最少为："<< nfeet / 4 <<""<< endl << "腿最多为：" << nfeet / 2 << endl;
	}
	return 0;
}