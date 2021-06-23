#include<iostream>
using namespace std;
int main()
{
	int all[10], odd[10], even[10];
	int i = 0, j = 0;
	for (; i < 10; i++);
	cin >> all[i];
	int numOdd = 0;
	int numEven = 0;
	for (i = 0; i < 10; i++) {
		if (all[i % 2 != 0]) {
			odd[numOdd] = all[i];
			numOdd++;
		}
		else {
			even[numEven] = all[i];
			numEven++;
		}
		}
	for (i = 0; i < numOdd - 1; i++) {
		for (j = i; j < numOdd; j++) {
			if (odd[j] > odd[i]) {
				int temp = odd[i];
				odd[i] = odd[j];
				odd[j] = temp;

			}
		}

	}
	for (i = 0; i < numEven - 1; i++) {
		for (j = i; j < numEven; j++) {
			if (even[j] > even[i]) {
				int temp = even[i];
				even[i] = even[j];
				even[j] = temp;

			}
		}

	}
	for (i = 0; i < numOdd; i++) {
		cout << odd[i] << " ";
	}
	for (i = 0; i < numEven; i++) {
		cout << even[i] << " ";
	}
	cout << endl;

	return 0;
}