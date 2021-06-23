#include<iostream>
using namespace std;
int main()
{
	char grade = 'a';
	cin >> grade;
	switch (grade)
	{
	case'a':cout << "85-100" << endl; break;
	case'b':cout << "70-84" << endl; break;
	default:cout << "´íÎó" << endl;
	case'c':
	case'd':
	case'e':
	case'f':cout << "60-69" << endl; break;
	case'g':cout << "<60" << endl; break;
	case'h':cout << "²î¾¢" << endl; break;
	
	}
	return 0;
}