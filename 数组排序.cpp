#include<iostream>
using namespace std;
int main()
{
	int a[10];//用于存放输入的数据
	int i = 0, j = 0;//赋初始值
	int temp = 0;//临时变量，用于交换数据
	for (i = 0; i < 10; i++)
		cin >> a[i];//输入十个待排序数据
	for (i = 0; i < 9; i++)//从第i个数据开始选择最大的数
	{
		for (j = i + 1; j < 10; j++)//从第i+1开始找数据寻找比i更大的数据
		{
			if (a[j] > a[i])//做判断，如果i+1 比i大，就进行互换
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++)//输出最终的排序结果
		cout << a[i] << " ";
		return 0;

}