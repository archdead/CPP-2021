#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i, j, k;
	i = 3;
	cout << -i++ << endl;//输出-3；后i变为4—— 后置++号，优先级高于负号 “负号”{＋＋号只能用到变量上，不能用于表达式}
	cout << -++i << endl;//输出-5，4加1，再取反，i保持为4，减号和前置++号，优先级同级，但是要先进行右侧的加减。
	//cout << (-i)++ << endl;
	//cout << ++i++ << endl;
	return 0;
}