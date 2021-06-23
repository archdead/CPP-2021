#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 2, d = 0, e = 2, f = 2;
	cout << a << " " << a++ << " " << endl;//   1；0；a变为1_对于一条程序语句有多条表达式，要从右往左计算分别计算表达式
	cout << ++b << " " << b++ << " " << endl;//   2；1；a变为1
	cout << c << " " << (c++) + (++c) << " " << endl;// 4；6 有多少++c就先计算"++c" ,所以先计算++c=3，再将3赋给c，并且c的的值增加一变为4
	cout << (d = f++) + (e = f) << endl;// 先进行赋值，再进行加，自增要发生在+结算之后，2+2=4
	cout << f << " " << d << " " << e << endl; //f变为3，d=2，e=2，下方的常量不再做计算，直接拿结果。
	return 0;
}