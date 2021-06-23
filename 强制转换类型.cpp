#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a = 7.545454787846561, b = 5.667788932165749654115, c = 0;
	cout << (double)a << endl;
	cout << (int)(a + b) << endl;
	cout << (float)(b / a) << endl;
    cout << setprecision(10) << (double)(a + b) << endl;
	return 0;
}