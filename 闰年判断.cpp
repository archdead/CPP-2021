#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int year = 0;
	cout << "请输年份" << endl;
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	cout << year << "是润年" << endl;
	else 
	cout << "不是闰年" << endl;
	return 0;
}