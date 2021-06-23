#include<iostream>
using namespace std;
int main()
{
	char a = ' ';//用于存放用户输入的字母
	cout << "猜猜我是哪个字母，最多五次，淦！" << endl;
	int i = 0;//用于记录猜了多少次了
	for (i = 0; i < 5; i++)
	{
		cin >> a;
		if (a == 'G')
		{
			cout << "你好牛逼，给你种子!" << endl;
			break;//终止循环
		}
		else  //不然的话
			cout << "你猜错了！再错淦你吖的！" << endl;
	}
	return 0;
		 
}