#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	char a[6] = "China";
	for (int i = 0; i <6; i++) //字符数组和字符串"China" 等价于 China /n
	{
		cout << a[i] << endl;
	}
	
	return 0;
}
