#include<iostream>
using namespace std;
int main()
{
	int blockcount = 0;
	int i = 0, N = 0;
	cin >> N;
	blockcount = 1;
	for (i = 1; i <=N; i++)
		blockcount = blockcount + i;
	cout << "������" << blockcount << "��" << endl;
	return 0;
}