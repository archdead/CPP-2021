#include<iostream>
using namespace std;
int main()
{
	float a = 0, b = 0, temp = 0;
	cout << "imput a and b:" << endl;
	cin >> a >> b;
	cout << "a=" << a << ",b=" << b << endl;
	//"<<"符号是个边界，字符串在这四个<<间的值会直接传递到屏幕上，这里就将a的值给到"a=" 将b的值给到",b="，再换行。
	temp = a; a = b; b = temp;
	//将数值a赋给临时变量，再将b的值赋给a，最后再将临时变量的值赋给b；也就是说利用临时变量将AB值互换
		cout << "a=" << a<<",b=" << b << endl;
	return 0;
}